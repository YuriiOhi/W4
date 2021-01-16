#include "Category.h"

int Category::lastId = 0;
std::list<Category*>Category::categories;

Category::Category(const char* title) : title(title) {
    lastId += 1;
    this->categoryId = lastId;
    categories.push_back(this);
}

Category::~Category() {
    std::cout << "Destructing Category object: " << this->getTitle() << std::endl;
    for ( std::list<Item*>::iterator it = this->catItems.begin(); it != this->catItems.end(); ++it ) {
        delete(*it); 
    }
    catItems.clear();
    categories.remove(this);
}
int Category::catItemsSize() {
    return int(this->catItems.size()) ;
}

const char* Category::getTitle() const {
    return this->title;
}

 const std::list<Item*>& Category::getItems() const {
    return (this->catItems);
}

void Category::setTitle(const char* title) {
    this->title = title;
} 

void Category::addItemToCategory(Item* item) {
    this->catItems.push_back(item);
}

void Category::removeItemFromCategory(Item* item) {
    this->catItems.remove(item);
}

std::ostream& operator<<(std::ostream& out,const Category& category)  {
    out << category.getTitle() << ':' << std::endl;
    std::list<Item*>::const_iterator it = category.getItems().begin();
    for ( ; it != category.getItems().end(); ++it ) {
        out << "-" << (*it) << std::endl;
    }
    return out;
}
