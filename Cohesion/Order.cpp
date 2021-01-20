#include "Order.h"
#include <set>

int Order::lastId = 0;
std::list<Order*>Order::orders;

Order::Order(Customer* customer, Item* item) {
	lastId += 1;
	this->orderId = lastId;
	this->customer = customer;
    this->orders.push_back(this);
    this->addItemToOrder(item);
}

Order::~Order() {
    std::cout << "Destructing Order object: " << this->getCustomer() << std::endl;
    orderedItems.clear();
    this->orders.remove(this);
}

const int Order::Order::getId() const {
	return this->orderId;
}

const Customer& Order::getCustomer() const {
	return *(this->customer);
}

const std::list<Item*>& Order::getOrderedItems() const { //заказанные товары
    return this->orderedItems;
}

void Order::addItemToOrder(Item* item) {
    this->orderedItems.push_back(item); // заказанные товары
}

void Order::removeItemFromOrder(Item* item) {
    this->orderedItems.remove(item); // заказанные товары
}

std::ostream& operator<<(std::ostream& out, const Order& order) {
  	out << "Order's ID is: " << order.getId() << std::endl;
    out << "Customer's name is: " << order.getCustomer();
    out << "The order is: " << std::endl;
    std::list<Item*>::const_iterator it = order.getOrderedItems().begin();
    for ( ; it != order.getOrderedItems().end(); ++it ) {
        out << "- " << *(*it);
    }
    return out;
}
