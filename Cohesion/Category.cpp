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
    std::set<Item*>::iterator it = this->catItems.begin();
    for ( ; it != this->catItems.end(); ++it ) {
        std::cout << "Destructing Item in Category:"  << std::endl;
        delete(*it);
    }
    catItems.clear();
    categories.remove(this);
}

const char* Category::getTitle() const {
    return this->title;
}

const std::set<Item*>& Category::getItems() const {
    return (this->catItems);
}

const std::list<Category*>& Category::getCategories() const {
   return (this->categories);
}

void Category::setTitle(const char* title) {
    this->title = title;
} 

void Category::addItemToCategory(Item* item) {
    this->catItems.insert(item);
}

void Category::removeItemFromCategory(Item* item) {
    this->catItems.erase(item);
}

std::ostream& operator<<(std::ostream& out,const Category& category)  {
    out << category.getTitle() << '-' << std::endl;
    std::set<Item*>::const_iterator it = category.getItems().begin();
    for ( ; it != category.getItems().end(); ++it ) {
        out << "-" << (*it) << std::endl;
    }
    return out;
}
