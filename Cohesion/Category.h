#ifndef CATEGORY_H
#define CATEGORY_H

#include <iostream>
#include <set>
#include <list>
#include "Item.h"

class Item;

class Category {
    private:
        static int lastId;
        int categoryId;
        const char* title;
        std::set<Item*> catItems;
    public:
        static std::list<Category*> categories;
    public:
        Category(const char* title);
        virtual ~Category();

        const char* getTitle() const;
        const std::set<Item*>& getItems() const;
        const std::list<Category*>& getCategories() const;
        void setTitle(const char* title);
        void addItemToCategory(Item* item);
        void removeItemFromCategory(Item* item);
};

std::ostream& operator<<(std::ostream& out, const Category& category) ;

#endif // CATEGORY_H
//Category: получение всех товаров в категории, добавления и удаления товаров.
//Для каждого класса необходим метод для получения полного списка объектов. Необходимость создания нового объекта для получения списка будет фэйлом.
//Продумать исключения.
//Учтите, что если вы не протестируете свои классы, с большой вероятностью работать они не будут.
//
//Следим за именами методов. Не забываем геттеры. Продумываем логику.
//
//Бонус: добавить уникальные идентификаторы для каждого класса.
