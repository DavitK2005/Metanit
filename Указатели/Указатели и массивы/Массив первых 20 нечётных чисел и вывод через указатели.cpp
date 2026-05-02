// Напишите программу, которая определяет и инициализирует массив первыми 20 нечетными числами.Выведите числа из массива на консоль по пять в строку.Для вывода используйте нотацию указателей(имя массива в качестве указателя).Подобным образом с помощью указателя выведите элементы массива в обратном порядке.

#include <iostream>

int main() {
	const unsigned int maximum{ 20 };
	int array[maximum];

	for (unsigned int i{}; i < maximum; i++) {
		array[i] = i * 2 + 1;
	}

	const unsigned int numbers_in_every_line{ 5 };
	for (int i{}; i < maximum; i++) {
		std::cout << *(array + i) << "\t";

		if((i+1) % numbers_in_every_line == 0) {
			std::cout << std::endl;
		}
	}
	
	std::cout << "\nReverse: " << std::endl;

	for (int i{ maximum - 1 }; i >= 0; i--) {
		std::cout << *(array + i) << "\t";
			
		if (i % numbers_in_every_line == 0) {
			std::cout << std::endl;
		}
	}

}