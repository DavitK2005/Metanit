//Напишите функцию add(), которая складывает два значения и возвращает их сумму.Предоставьте перегруженные версии для сложения значений типов int, double и string

#include <iostream>
#include <string>

int add(int, int);
double add(double, double);
std::string add(std::string, std::string);

int main() {
	int first = add(5, 4);
	double second = add(5.9, 4.9);
	std::string third = add("Hello", "World");

	std::cout << first << "\t" << second << "\t" << third;
}

int add(int a, int b) {
	return a + b;
}
double add(double a, double b) {
	return a + b;
}
std::string add(std::string a, std::string b) {
	return a + " " + b;
}