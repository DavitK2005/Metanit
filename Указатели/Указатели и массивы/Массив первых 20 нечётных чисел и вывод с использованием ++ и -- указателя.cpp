// Напишите программу, которая определяет и инициализирует массив первыми 20 нечетными числами. Выведите числа из массива на консоль по пять в строку. Для вывода определите указатель, который указывает на массив. С помощью инкремента (++) указателя выведите элементы в прямом порядке. А с потом в отдельном цикле с помощью декремента указателя выведите элементы массива в обратном порядке.

#include <iostream>

int main() {
	const unsigned int n{ 20 };
	int array[n];

	for (int i{}; i < n; i++) {
		array[i] = i * 2 + 1;
	}

	int* ptr{ array };
	unsigned int numbers_in_the_line{5};
	for (int i{}; i < n; i++) {
		std::cout << *ptr++ << "\t";

		if ((i + 1) % numbers_in_the_line == 0) {
			std::cout << std::endl;
		}
	}

	std::cout << "\nReverse:\n";
	for (int i{ n - 1 }; i >= 0; i--) {
		std::cout << *--ptr << "\t";

		if (i % numbers_in_the_line == 0) {
			std::cout << std::endl;
		}
	
	}

}