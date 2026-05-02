// Напишите программу, в которой определен одномерный массив чисел int. Пользователь должен вводить с консоли значения для всех элементов массива. После завершения ввода всех чисел программа должна вывести элементы массива в обратном порядке.

#include <iostream>

int main() {
	const int maximum{ 6 };
	int size_of_array[maximum]{};

	int count{};
	std::cout << "Enter a number: " << std::endl;
	while (count < maximum) {
		std::cin >> size_of_array[count];
		count++;
	}

	for (count = 1; count < maximum; count++) {
		std::cout << size_of_array[maximum - count] << "\t";
	}

}