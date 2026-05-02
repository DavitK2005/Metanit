// Индекс массы тела (ИМТ) представляет массу человека в килограммах, деленную на квадрат роста в метрах (масса/(рост * рост)). Напишите программу, которая спрашивает у пользователя его вес (в киллограммах) и рост (сантиметрах), по ним вычисляет индекс массы тела и выводит его на консоль.

#include <iostream>

int main() {
	double weight_kg{};
	double height_cm{};
	const double cm_per_metr{ 0.01 };

	std::cout << "Enter a weight in kilograms: ";
	std::cin >> weight_kg;

	std::cout << "Enter a height in cm: ";
	std::cin >> height_cm;

	const auto cm_convert_metr{ height_cm * cm_per_metr };
	const auto IMT{ weight_kg / (cm_convert_metr * cm_convert_metr) };
	
	std::cout << "Your IMT is: " << IMT;
}