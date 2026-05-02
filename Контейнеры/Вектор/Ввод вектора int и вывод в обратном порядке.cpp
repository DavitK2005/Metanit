/*Определите вектор(объект vector) для хранения чисел типа int.Пусть пользователь сначала вводит с консоли число N - размер вектора.Затем в цикле с консоли вводит N чисел, которые добавляются в данный вектор.После ввода в цикле выведите все числа из вектора в строчку в обратном порядке.*/

#include <iostream>
#include <vector>

int main() {
	std::vector<int> my_vector {};
	unsigned int maximum{};
	int n{};
	std::cout << "Enter a size of vector: ";
	std::cin >> maximum;
	std::cout << "Enter a values of vector: ";
	for (int i{}; i < maximum; i++) {
		std::cin >> n;
		my_vector.push_back(n);
	}
	for (int i{1}; i <= maximum; i++) {
		std::cout << my_vector[maximum - i];
	}
}