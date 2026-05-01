// Напишите программу, которая запрашивает у пользователь радиус круга и, используя полученный радиус, вычисляет площадь круга.

#include <iostream>

int main() {
	const float pi{ 3.14159 };

	float radius{};
	std::cout << "Enter a number of radius: ";
	std::cin >> radius;

	const float S{ pi * radius * radius };
	std::cout << "S = " << S;
}