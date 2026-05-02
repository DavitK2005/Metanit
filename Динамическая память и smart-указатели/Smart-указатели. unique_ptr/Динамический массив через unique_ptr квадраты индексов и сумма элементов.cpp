//Напишите программу, в которой пользователь вводит размер массива, и программа создает smart - указатель типа unique_ptr и инициализирует его динамическим массивом такого размера(пусть массив хранит значения типа int).Инициализируйте все элементы массива так, чтобы значение элемента по индексу i было равно i* i(то есть квадрату числа i).Вычислите сумму элементов и выведите результат на консоль.

#include <iostream>
#include <memory>

int main() {
	unsigned int n{};
	std::cout << "Enter a size of array: ";
	std::cin >> n;
	std::unique_ptr<int[]> ptr{std::make_unique<int[]>(n)};

	int sum{};
	for (int i{}; i < n; i++) {
		ptr[i] = i * i;
		sum += ptr[i];
	}
	std::cout <<"Sum of numbers: "<< sum;
}