#pragma once
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <list>
#include <set>
#include "Order.h"


class Order;

class Customer {
    private:
        const char* nameSurname;
        int customerId;
        static int lastId;
        std::set<Order*> orders;
    public:
        static std::list<Customer*> customers;
        static void clearCustomers();
    public:
        Customer(const char* name);
        virtual ~Customer();
        const char* getName() const;
       	const int getId() const;
		const std::set<Order*>& getAllOrders() const;
        void addNewOrder(Order* newOrder);
};

std::ostream& operator<<(std::ostream& out, const Customer& object);

#endif // CUSTOMER_H
//Customer: получение всех заказов, добавление нового заказа.
//
//Для каждого класса необходим метод для получения полного списка объектов. Необходимость создания нового объекта для получения списка будет фэйлом.
//Продумать исключения.
//Учтите, что если вы не протестируете свои классы, с большой вероятностью работать они не будут.
//
//Следим за именами методов. Не забываем геттеры. Продумываем логику.
//
//Бонус: добавить уникальные идентификаторы для каждого класса.

