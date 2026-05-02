// Напишите программу, которая считывает с консоли три символа и упаковывает их в одно число. Выведите полученное число на консоль. Затем распакуйте число - получите обратно упакованные символы из числа в отдельные переменные.

#include <iostream>

int main() {
	unsigned int packed{};
	unsigned char ch{};

	std::cout << "Enter a character: ";
	std::cin >> ch;
	packed = packed | ch;

	std::cout << "Enter a second character: ";
	std::cin >> ch;
	packed = packed << 8;
	packed = packed | ch;

	std::cout << "Enter a third number: ";
	std::cin >> ch;
	packed = packed << 8;
	packed = packed | ch;

	std::cout << "The number is: " << packed << std::endl;

	unsigned int mask(0xFF);

	ch = packed & mask;
	std::cout << "The third charachter is: " << ch;
	ch = (packed >> 8) & mask;
	std::cout << "The second characther is: " << ch;
	ch = (packed >> 16) & mask;
	std::cout << "The third characther is: " << ch;

}