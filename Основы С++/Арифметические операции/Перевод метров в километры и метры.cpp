// Создайте программу, которая переводит метры в киллометры. Например, пользователь вводит 2345 метров, а программа в ответ отображает 2 километра и 345 метров.

#include <iostream>

int main() {
	const int meter_to_kilometer{ 1000 };
	int meters{};
	std::cout << "Enter a meter: ";
	std::cin >> meters;

	const int kilometer{ meters / meter_to_kilometer };
	const int meter{ meters % meter_to_kilometer };
	std::cout << "Number " << meters << " is: " << kilometer << " kilometer and " << meter << " meter";
}