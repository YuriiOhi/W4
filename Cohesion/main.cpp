#include <iostream>
#include "Category.h"
#include "Item.h"
#include "Customer.h"
#include "Order.h"

int main() {
	Category fruit("Fruit");
	Category vegetables("Vegetables");
	Category alcoholDrinks("Alcoholic Drinks");

	Item bananas("Cuban Bananas", &fruit);
	Item apples("Ukrainian Apples", &fruit);
	Item cherries("American Cehrries", &fruit);

	Item cucumbers("Ukrainian Cucumbers", &vegetables);
	Item tomatoes("Polish tomatoes", &vegetables);
	Item garlic("Chinese Garlic", &vegetables);

	Item vodka("Ukrainian Vodka", &alcoholDrinks);
	Item whiskey("Irish whiskey", &alcoholDrinks);
	Item beer("German beer", &alcoholDrinks);

	fruit.addItem(&bananas);
	fruit.addItem(&apples);
	fruit.addItem(&cherries);

	vegetables.addItem(&cucumbers);
	vegetables.addItem(&tomatoes);
	vegetables.addItem(&garlic);

	alcoholDrinks.addItem(&vodka);
	alcoholDrinks.addItem(&whiskey);
	alcoholDrinks.addItem(&beer);

	Customer Nick("Nick Tedson");
	Customer Bob("Bob Nickson");
	Customer John("Ted Bobson");

	Order forJohn(John, beer);
	forJohn.addItem(&vodka);
	forJohn.addItem(&whiskey);

	Order forNick(Nick, cucumbers);
	forNick.addItem(&tomatoes);
	forNick.addItem(&apples);

	Order forBob(Bob, garlic);
	forBob.addItem(&bananas);
	forBob.addItem(&whiskey);

	std::cout << "!" << std::endl;
	std::cout << forNick << std::endl;
    
    









	return 0;
}
