/*Определите базовый класс Animal, который представляет животное и который содержит две приватные переменные : строку для хранения имени животного и целое число для хранения веса животного.Также определите общедоступную функцию print, которая выводит на консоль сообщение с указанием имени и веса объекта Animal.

Также создайте два производных класса Cat(кошка) и Dog(собака), которые наследуются от класса Animal.В функции main создайте несколько объектов типа Cat и Dog и с помощью функции print выведите информацию об этих объектах на консоль.*/

#include <iostream>

class Animal {
public:
	Animal(std::string name, unsigned int weight) {
		this->name = name;
		this->weight = weight;
	}
	void print() {
		std::cout << name<<"\t"<< weight << std::endl;
	}
	~Animal() {};
private:
	std::string name;
	unsigned int weight;
};


class Cat : public Animal {
public:
	using Animal::Animal;
};

class Dog : public Animal {
public:
		using Animal::Animal;
};

int main() {
	Animal test1("All", 10);
	Cat test2("Cat", 20);
	Dog test3("Dog", 30);
	test1.print();
	test2.print();
	test3.print();
}