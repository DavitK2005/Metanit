// Напишите программу обмена валют: программа запрашивает текущий курс доллара, например, к рублю, и количество единиц (рублей) для конвертации и выводит на консоль сконвертированную сумму в долларах.

#include <iostream>

int main() {
	double course_dollar_to_rubli{};
	std::cout << "Enter a course dollar to rubli: ";
	std:: cin >> course_dollar_to_rubli;

	double sum_rubli{};
	std::cout << "Enter a sum of your rubli: ";
	std::cin >> sum_rubli;

	const auto dollar{ sum_rubli / course_dollar_to_rubli };
	
	std::cout << sum_rubli << "rubli = " << dollar << " $";


}