// Одна из форм определения цвета представляет запись в формате RGB, где R, G и B - соответственно компоненты красного, зеленого и синего цвета. Каждая компонента может иметь значение от 0 до 255. Например, число 0x04F1aA216 в шестнадцатеричном формате представляет цвет, где красная компонента равна 04, зеленая - F1 и синяя - A2
// Пусть дана переменная
// unsigned int color {0x04F1A2u};     // переменная, которая хранит цвет
// Напишите программу, которая извлекает из этой переменной все три цветовых компоненты в отдельные переменные.

#include <iostream>

int main() {
	unsigned int color{ 0x04F1A2u };
	unsigned int mask{0xFFu};

	unsigned int red{ (color >> 16) & mask };
	unsigned int green{ (color >> 8) & mask };
	unsigned int blue{ color & mask };

	std::cout << "Red: " << red << std::endl;
	std::cout << "Green: " << green << std::endl;
	std::cout << "Blue: " << blue << std::endl;

}