#include "Customer.h"
    
int Customer::lastId = 0;
std::list<Customer*> Customer::customers;

Customer::Customer(const char* name) {
	lastId += 1;
    this->nameSurname = name;
	this->customerId = lastId;
    this->customers.push_back(this);
	this->orders = std::set<Order*>();
}

Customer::~Customer() {
    std::cout << "Destructing Customer object: " << this->getName() << std::endl;
    std::set<Order*>::iterator it = this->orders.begin();
    for ( ; it != this->orders.end(); ++it ) {
        delete(*it);
    }
    orders.clear();
    customers.remove(this);
}

const int Customer::getId() const {
	return this->customerId;
}

const char* Customer::getName() const {
    return this->nameSurname;
}


const std::set<Order*>& Customer::getAllOrders() const {
	return (this->orders);
}

void Customer::addNewOrder(Order* newOrder) {
    this->orders.insert(newOrder);
}

std::ostream& operator<<(std::ostream& out, const Customer& customer) {
	out << customer.getName() << " (ID: "<<  customer.getId() << ")" << std::endl; // добавить вывод заказов
    return out;
}
