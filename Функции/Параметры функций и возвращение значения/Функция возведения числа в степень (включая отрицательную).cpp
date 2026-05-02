// Напишите функцию, которая возводит число в определенную степень. В качестве параметров функция должна принимать само число и показатель степени. А в качестве результата возвращать результат возведения числа в степень. Степень может быть как положительной, так и отрицательной.

#include <iostream>

auto foo(auto number, auto power) {
	double result{ 1.0 };
	if (power >= 0) {
		for (int i{ 1 }; i <= power; i++) {
			result = result * number;
		}
	}
	else
		for (int i{ 1 }; i <= -power; i++) {
			result = result / number;
		}
	return result;
}

int main() {

	auto input_number(5);
	auto input_number2(5);
	auto input_power(2);
	auto input_power2(-2);

	std::cout << foo(input_number, input_power) << std::endl;
	std::cout << foo(input_number2, input_power2) << std::endl;

}