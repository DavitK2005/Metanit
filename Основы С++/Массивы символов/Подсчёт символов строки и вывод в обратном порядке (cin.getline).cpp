// Напишите программу, в которой с помощью функции std::cin.getline() пользователь вводит строку с консоли в массив символов. С помощью цикла подсчитайте количество символов, введенных пользователем. Затем с помощью второго цикла выведите все символы введенной строки в обратном порядке.

#include <iostream>

int main() {
	const int max_length{ 100 };
	char input[max_length];
	std::cout << "Enter a text: " << std::endl;
	std::cin.getline(input, max_length);
	
	int count{};
	for (; count < max_length && input[count] != '\0'; ++count) {};
	std::cout << "Characters count: " << count << std::endl;


	for (int i{ 1 }; i <= count; i++) {
		std::cout << input[count - i];
	}

	std::cout << std::endl;
}