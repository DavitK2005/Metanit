// Напишите программу, которая предлагает ввести два целых числа, а затем использует конструкцию if-else для вывода сообщения о том, равны ли два числа.

#include <iostream>

int main() {
	int a{};
	int b{};
	std::cout << "Enter a first numnber: " << std::endl;
	std::cin >> a;
	std::cout << "Enter a second number: " << std::endl;
	std::cin >> b;

	if (a == b) {
		std::cout << "a = b " << std::endl;
	}
	else {
		std::cout << "a != b " << std::endl;
	}
}