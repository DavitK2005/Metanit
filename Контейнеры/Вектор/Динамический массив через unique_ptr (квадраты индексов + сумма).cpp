/*Напишите программу, в которой пользователь вводит размер вектора, и программа создает smart - указатель типа unique_ptr и инициализирует его динамическим вектором такого размера(пусть вектор хранит значения типа int).Инициализируйте все элементы вектора так, чтобы значение элемента по индексу i было равно i* i(то есть квадрату числа i).Вычислите сумму элементов и выведите результат на консоль.*/

#include <iostream>
#include <vector>
#include <memory>

int main() {
	unsigned int size{};
	std::cout << "Enter a size of the vector: ";
	std::cin >> size;
	
	std::unique_ptr<std::vector<int>> my_vector{ std::make_unique<std::vector<int>>(size) };
	int sum{};
	for (int i{}; i < size; i++) {
		(*my_vector)[i] = i * i;
		sum += (*my_vector)[i];
	}
	std::cout << sum;
}