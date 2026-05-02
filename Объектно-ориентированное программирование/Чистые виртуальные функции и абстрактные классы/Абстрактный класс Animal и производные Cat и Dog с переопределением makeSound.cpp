/*Определите абстрактный класс Animal, который представляет животное и который имеет две переменных - name(кличка животного) и weight(вес животного).Также определите в классе Animal чистую виртуальную функцию makeSound, которая представляет произносимые животным звуки, и функцию print, которая выводит на консоль имя и вес животного.

Определите классы Cat(кошка) и Dog(собака), которые наследуются от класса Animal и которые переопределяют функцию makeSound*/

#include <iostream>
#include <string>

class Animal {
public:
	Animal(std::string name, double weight) : name{name}, weight(weight) {}
	virtual void makeSound() const = 0;
	virtual void print() const {
		std::cout << "Name of the animal: " << name << "\t" << "Weight of the animal: " << weight << std::endl;
	}
private:
	std::string name;
	double weight;
};

class Cat : public Animal {
public: 
	Cat(std::string name, double weight) : Animal(name, weight) {}
	virtual void makeSound() const override {
		std::cout << "Sound of cat "<<std::endl;
	}
};

class Dog : public Animal {
public:
	Dog(std::string name, double weight) : Animal(name, weight) {}
	virtual void makeSound() const override {
		std::cout << "Sound of dog " << std::endl;
	}
};

int main() {
	Cat cat_object("GoodCat", 50);
	Dog dog_object("GoodDog", 70);

	cat_object.print();
	dog_object.print();

	cat_object.makeSound();
	dog_object.makeSound();

}