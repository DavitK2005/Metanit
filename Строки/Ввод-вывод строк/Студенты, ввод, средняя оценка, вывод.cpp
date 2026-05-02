/*
https://metanit.com/cpp/practice/11.php

Напишите программу, которая считывает именя и оценки произвольного количества студентов.Вычислите и выведите среднюю оценку и выведите имена и оценки всех учеников.*/

#include <iostream>
#include <vector>
#include <string>

int main() {
	std::vector<std::string> name;
	std::vector<double> grade;

	double average_grade{};
	while (true) {
		std::string name_input;
		std::cout << "Enter a name: "<<"\n";
		getline(std::cin, name_input);
		name.push_back(name_input);

		double grade_input{};
		std::cout << "Enter a grade: "<<"\n";
		std::cin >> grade_input;
		grade.push_back(grade_input);
		average_grade += grade_input;

		char answer{};
		std::cout << "Do you want to finish? y/n "<<"\n";
		std::cin >> answer;
		
		std::cin.ignore();

		if (answer == 'y') break;
	}
	std::cout << "Average grade is: " << average_grade / grade.size() << "\n";

	for (size_t i{}; i < name.size(); i++) {
		std::cout << "Name: " << name[i] << "\n";
		std::cout << "Grade: " << grade[i] << "\n";
	}
}