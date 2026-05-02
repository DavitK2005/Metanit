// Напишите программу, в которой в цикле do-while пользователь вводит по одному символу, а программа подсчитывает количество введенных символов. Когда пользователь вводит точку, ввод заканчивается, и программа выводит пользователю число введенных символов (не включая финальную точку)

#include <iostream>

int main() {
	unsigned int count{};
	char input{};

	do {
		std::cout << "Enter a any charachter: ";
		std::cin >> input;
		++count;
	} while (input != '.');

	--count;
	std::cout << "Charachters count is " << count;
}