// Напишите программу, в которой в цикле while пользователь вводит произвольное количество чисел, а программа вычисляет их сумму. После каждого ввода спрашивайте пользователя, закончил ли он ввод чисел. Если пользователь ввел "y" или "Y", то ввод чисел завершается, после чего программа должна вывести сумму всех введенных чисел и их среднее арифметическое.

#include <iostream>

int main() {
	double input{};
	double sum{};
	int count{};
	char yes_or_no{};

	while (true) {
		std::cout << "Enter a number: ";
		std::cin >> input;
		
		++count;
		sum += input;
		std::cout << "Did you finish? If yes enter y or Y ";
		std::cin >> yes_or_no;
		if (yes_or_no == 'y' || yes_or_no == 'Y') break;
	}
	std::cout << "Sum: " << sum << std::endl;
	std::cout << "Average: " << (static_cast<double>(sum / count));
}