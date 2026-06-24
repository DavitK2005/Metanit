/*https://metanit.com/cpp/practice/24.php

Определите лямбда - выражение, которое возвращает количество строк в векторе std::vector<std::string>, которые начинаются с определенной буквы.*/

#include <iostream>
#include <vector>
#include <string>

int main() {
	std::vector<std::string> names{ "Davit", "Arman", "Artashes", "Artur", "Tigran", "Henrik", "John", "Henry" };

	auto counterForNames{ [&names](char firstLetterOfTheName) {
			size_t counter{};
			for (std::string takeEachCharacther : names) {
				if (firstLetterOfTheName == takeEachCharacther[0]) {
					counter++;
				}
			}
			return counter;
		}
	};

	char firstTest{ 'A' };
	std::cout << counterForNames(firstTest);
}