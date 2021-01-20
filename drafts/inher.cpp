#include <iostream>

class Animal {
	public:
		std::string* name;
		Animal(const std::string& name = "noname") {
			this->name = new std::string(name);
			std::cout << "Animal constructor" << std::endl;
		};
		virtual ~Animal() {
			std::cout << "Animal destructor" << std::endl;
			delete (this->name);
		};
		virtual void say() {
			std::cout << "...." << std::endl;
		}
};

class Horse : virtual public Animal {
	public:
		Horse(const std::string& name) : Animal(name) {
			std::cout << "Horse constructor" << std::endl;
		};
		virtual ~Horse() {
			std::cout << "Horse destructor" << std::endl;
		};
		virtual void say() { // перегрузили метод
			std::cout <<  *(this->name) << " Igogo...." << std::endl; 
		}
};

class Human: virtual public Animal {
	public:
		Human(const std::string& name) : Animal(name) { //пробрасываем в конструктор родителя
			std::cout << "Human  constructor" << std::endl;
		}
		virtual ~Human() {
			std::cout << "Human destructor" << std::endl;
		};
		virtual void say() {
			std::cout <<  *(this->name) <<  " Hello...." << std::endl;
		}
};

class Centaurus: public Human, public Horse {
	public:
		Centaurus(const std::string& name) : Human(name), Horse(name), Animal(name){
			std::cout << "Centaurus  constructor" << std::endl;
		};
		~Centaurus() {
			std::cout << "Centaurus destructor" << std::endl;
		};
		void say() {
			std::cout <<  *(this->name) <<  " Hello...." << std::endl;
		}
};

void reception(Animal& a) {
	a.say();
}

void deathroom(Animal* a) {
	delete(a);
}

int main() {
	Animal* a = new Animal();
	Horse* hr = new Horse("White Horse");
	Human* h = new Human("Trump");
	std::cout << "------------------------------" << std::endl;
	Centaurus* c = new Centaurus("Centaurus");

	reception(*a);
	reception(*hr);
	reception(*h);
	reception(*c);
	std::cout << "------------------------------" << std::endl;

	// delete(a);
	// delete(hr);
	// delete(h);
	// delete(c);

	deathroom(a);
	deathroom(hr);
	deathroom(h);
	deathroom(c);

	return 0;
}