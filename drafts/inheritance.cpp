#include <iostream>

class Animal {
	public: // access specifiers.
		std::string* name;

		Animal(const std::string& name = "noname") {
			this->name = new std::string(name);
			std::cout << "Animal constructor" << std::endl;
		};
		~Animal() {
			delete(this->name);
			std::cout << "Animal Destructor" << std::endl;
		};

		virtual void say() {
			std::cout << "..." << std::endl;
		}
};

class Horse: virtual public Animal {
	public:
		Horse(const std::string& name) : Animal(name) {
			std::cout << "Horse constructor" << std::endl;
		};
		~Horse() {
			std::cout << "Horse Destructor" << std::endl;

		//	delete(this->name);
		};

		virtual void say() {
			std::cout << "[" << *(this->name) << "] Igogo!!!..."  << std::endl;
		}
};

class Human: virtual public Animal {
	public:
		Human(const std::string& name) : Animal(name) {

			std::cout << "Human constructor" << std::endl;
		};
		~Human() {
		std::cout << "Human Destructor" << std::endl;

			//delete(this->name);
		};

		virtual void say() {
			std::cout << "[" << *(this->name) << "] Hello..." << std:: endl;
		}
};

class Centaurus: public Human, public Horse {
	public:
		Centaurus(const std::string& name) : Human(name), Horse(name), Animal(name) {
			std::cout << "Centaurus constructor" << std::endl;
		};
		~Centaurus() {
			std::cout << "Centaurus Destructor" << std::endl;

			//delete(this->name);
		};
		virtual void say() {
			std::cout << "[" <<*(this->name) <<  "] Hello, frrrrrr..." << std::endl;
		}
};
  
void reception(Animal* a) { //оптравление по базовому классу
	a->say();
}

void deathRoom(Animal* a) {
	delete(a);
}

int main() {
	Animal* a = new Animal();
	Horse* hr = new Horse("Buffalo");
	Human* h = new Human("John Wick");
	Centaurus* c = new Centaurus("SCHTAR");


	std::cout << "-============================-============================-============================-============================" << std::endl;

	reception(a);
	reception(hr);
	reception(h);
	reception(c);
	std::cout << "-============================-============================-============================-============================" << std::endl;

	delete(a);
	delete(hr);
	delete(h);
	delete(c);

	return 0;
}






