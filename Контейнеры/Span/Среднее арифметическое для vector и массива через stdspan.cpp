/*Напишите функцию, которая позволяет вычислить среднее арифметическое чисел в векторе std::vector<double> и массиве double[].Чтобы не создавать для массива и вектора отдельные функции, используйте тип std::span<double>*/

#include <iostream>
#include <vector>
#include <span>

double average(std::span<double>);

int main() {
	std::vector<double> test1 = { 5, 19.5, 7, 9 };
	double test2[] = {5, 19.5, 7, 9};
	std::cout << average(test1) << "\t" << average(test2);
}


double average(std::span<double> input) {
	double sum{};
	for (size_t i{}; i < input.size(); i++) {
		sum += input[i];
	}
	return sum / size(input);
}