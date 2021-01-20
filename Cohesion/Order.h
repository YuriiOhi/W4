#pragma once
#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <list>
#include <set>
#include "Customer.h"
#include "Item.h"

class Customer;
class Item;

class Order {
    private:
        static int lastId;
        int orderId;
        Customer* customer;
        Item* item;
        std::list<Item*> orderedItems;
    public:
        static std::list<Order*> orders;
    public:
        Order(Customer* customer, Item* item);
        virtual ~Order();

       	const int getId() const;
        const Customer& getCustomer() const; // получение клиента, 
        const std::list<Item*>& getOrderedItems() const; // получение списка товаров,
    
        void clearOrders();
        void addItemToOrder(Item* item);
        void removeItemFromOrder(Item* item);
};

std::ostream& operator<<(std::ostream& out, const Order& order);

#endif // ORDER_H
//Order: получение клиента, получение списка товаров, добавление/удаление товара. Клиента изменить нельзя. Заказ без товаров не существует, как не существет и без клиента.
//Для каждого класса необходим метод для получения полного списка объектов. Необходимость создания нового объекта для получения списка будет фэйлом.
//Продумать исключения.
//Учтите, что если вы не протестируете свои классы, с большой вероятностью работать они не будут.
//
//Следим за именами методов. Не забываем геттеры. Продумываем логику.
//
//Бонус: добавить уникальные идентификаторы для каждого класса.
