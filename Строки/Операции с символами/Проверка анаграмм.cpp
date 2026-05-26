/*https://metanit.com/cpp/practice/13.php

Напишите программу, которая запрашивает ввод двух слов и определяет, является ли одно из них анаграммой другого.Анаграмма слова образована перестановкой его букв.Например, "воз" и "зов" или "все" и "сев".*/

#include <iostream>
#include <string>

int main() {
	std::string first_word{};
	std::string second_word{};

	std::cout << "Enter a first word: ";
	std::cin >> first_word;

	std::cout << "Enter a second word: ";
	std::cin >> second_word;

	if (first_word.length() != second_word.length()) {
		std::cout << "The words are not anagrams";
		return 0;
	}

	std::string copy_second_word{ second_word };

	for (char ch : first_word) {
		for (int i{}; i < copy_second_word.length(); i++) {
			if (std::tolower(ch) == std::tolower(copy_second_word[i])) {
				copy_second_word.erase(i, 1);
				break;
			}
		}
	}
	if (copy_second_word.empty()) {
		std::cout << "Word " << first_word << " and " << "word " << second_word << " are anagrams";
	}
	else {
		std::cout<< "Word " << first_word << " and " << "word " << second_word << " are not anagrams";
	}
}	