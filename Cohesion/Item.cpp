#include "Item.h"
int Item::lastId = 0;
std::set<Item*>Item::itemsSet;

Item::Item(const char* title, Category* category) : title(title), category(category) {
    lastId += 1;
    this->itemId = lastId;
    itemsSet.insert(this);
    this->category->addItemToCategory(this);
}
Item::~Item() {
    std::cout << "Destructing Item object: " << this->getTitle() << std::endl;
    category->removeItemFromCategory(this);
    itemsSet.erase(this);
}
 
const char* Item::getTitle() const {
    return this->title;
}

const Category& Item::getCategory() const {
    return *(this->category);
}

void Item::setTitle(const char* title) {
    this->title = title;
}

const std::list<Order*>& Item::getOrders() const {
   return order->orders;
}
void Item::addItem(Item* item) {
    this->itemsSet.insert(item);
}

const std::set<Item*>& Item::getItems() const {
    return this->itemsSet;
}

void Item::setCategory(Category* category) {
    this->category = category;
}
void Item::addOrder(Order* newOrder) {
    this->order->orders.push_back(newOrder);
}

std::ostream& operator<<(std::ostream& out, const Item& item) {
    out << item.getTitle() << " (";
    out << item.getCategory().getTitle() << ")" << std::endl;
    return out;
}
