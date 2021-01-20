#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include "Category.h"
#include "Order.h"
#include <set>

class Category; // Объявление идентификатора требуется компилятору для того,
class Order;    // чтобы знать тип (размер) идентификатора,
                // но не его значения (в случае переменных).

class Item {
    private:
        static int lastId;
        int itemId;
        const char* title;
        Category* category;
        Order* order;
    public:
        static std::set<Item*> itemsSet; // тут храню все созданные обьекты Товара
    public:
        Item(const char* title, Category* category);
        ~Item();
    
        const char* getTitle() const;
        const Category& getCategory() const;
        const std::list<Order*>& getOrders() const;
        const std::set<Item*>& getItems() const;
        void printOrders();
        void addItem(Item* item);
        void addOrder(Order* newOrder);
        void setTitle(const char* title);
        void setCategory(Category* category);
};

std::ostream& operator<<(std::ostream& out, const Item& item);

#endif //ITEM_H
//Item: задание категории, получение списка заказов. Товар без категории существовать не может.
//Для каждого класса необходим метод для получения полного списка объектов. Необходимость создания нового объекта для получения списка будет фэйлом.
//Продумать исключения.
//Учтите, что если вы не протестируете свои классы, с большой вероятностью работать они не будут.
//
//Следим за именами методов. Не забываем геттеры. Продумываем логику.
//
//Бонус: добавить уникальные идентификаторы для каждого класса.
