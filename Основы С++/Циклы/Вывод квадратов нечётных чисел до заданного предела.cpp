// Напишите программу, которая выводит квадраты нечетных целых чисел от 1 до предела который вводит пользователь.

#include <iostream>

int main() {
	int maximum{};

	std::cout << "Enter a maximum number: ";
	std::cin >> maximum;
	/* for (int i{1}; i <= n; i += 2)
	{
		std::cout << i << ": " << i * i << std::endl;
	}
}*/
	for (int i{ 1 }; i <= maximum; i++) {
		if (i % 2 != 0) {
			std::cout << "i * i = " << i * i << std::endl;
		}
	}
}