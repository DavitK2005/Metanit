//Напишите программу, в которой пользователь вводит размер массива, и программа динамически выделяет массив такого размера для хранения значений типа int.Используя указатель, инициализируйте все элементы массива так, чтобы значение элемента по индексу i было равно i* i(то есть квадрату числа i).Вычислите сумму элементов, используя синтаксис массивов(обращение к элементам по индексу в квадратных скобках), и выведите результат на консоль.

#include <iostream>

int main() {
	int n{};
	std::cout << "Enter a size of array: ";
	std::cin >> n;

	int* dynamic_array = new int[n];
	auto sum_of_elements{0};
	for (int i{}; i < n; i++) {
		//dynamic_array[i] = i * i;
		*(dynamic_array + i) = i * i;
		std::cout << dynamic_array[i] << std::endl;
		sum_of_elements += dynamic_array[i];
	}
	std::cout << sum_of_elements;
	delete[] dynamic_array;
	dynamic_array = nullptr;
}