#include <iostream>
#include "Category.h"
#include "Item.h"
#include "Customer.h"
#include "Order.h"

int main() {
    Category* fruit = new Category("Fruit");
    Category* vegetables = new Category("Vegetables");
    Category* alcoholDrinks  = new Category("Alcoholic Drinks");

    Item* bananas = new Item("Cuban Bananas", fruit);
    Item* apples = new Item("Ukrainian Apples", fruit);
    Item* cherries = new Item("American Cehrries", fruit);

    Item* cucumbers = new Item("Ukrainian Cucumbers", vegetables);
    Item* tomatoes = new Item("Polish tomatoes", vegetables);
    Item* garlic = new Item("Chinese Garlic", vegetables);

    Item* vodka = new Item("Ukrainian Vodka", alcoholDrinks);
    Item* whiskey = new Item("Irish whiskey", alcoholDrinks);
    Item* beer = new Item("German beer", alcoholDrinks);

    fruit->addItemToCategory(bananas);
    fruit->addItemToCategory(apples);
    fruit->addItemToCategory(cherries);

    vegetables->addItemToCategory(cucumbers);
    vegetables->addItemToCategory(tomatoes);
    vegetables->addItemToCategory(garlic);

    alcoholDrinks->addItemToCategory(vodka);
    alcoholDrinks->addItemToCategory(whiskey);
    alcoholDrinks->addItemToCategory(beer);

    Customer* Nick= new Customer("Nick Tedson");
    Customer* Bob= new Customer("Bob Nickson");
    Customer* John= new Customer("Ted Bobson");

    Order* forJohn = new Order(John, beer);
    forJohn->addItemToOrder(vodka);
    forJohn->addItemToOrder(whiskey);

    Order* forNick = new Order(Nick, whiskey);
    forNick->addItemToOrder(tomatoes);
    forNick->addItemToOrder(apples);

    Order* forBob = new Order(Bob, vodka);
    forBob->addItemToOrder(bananas);
    forBob->addItemToOrder(whiskey);
    
    vodka->printOrders();
    
    std::cout << *forNick << std::endl;

    delete forJohn;
    delete forNick;
    delete forBob;
    
    delete bananas;
    delete apples;
    delete cherries;
    delete cucumbers;
    delete tomatoes;
    delete garlic;
    delete vodka;
    delete whiskey;
    delete beer;
    
    delete Nick;
    delete Bob;
    delete John;
    
    delete vegetables;
    delete alcoholDrinks;
    delete fruit;
        
    return 0;
}
