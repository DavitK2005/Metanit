/*https://metanit.com/cpp/practice/13.php

Напишите программу, которая считывает с консоли текст.Далее программа считывает с консоли символ и находит в тексте все слова, которые начинаются с этого символа(не важно в каком регистре).В конце на консоль выводится список всех этих слов.*/

#include <iostream>
#include <string>
#include <vector>

int main() {
	std::string text{};
	char character{};

	std::cout << "Enter a text: ";
	std::getline(std::cin, text);

	std::cout << "Enter a character: ";
	std::cin >> character;

	const std::string separators{ " ,.:;\"'?!\n" };

	std::vector<std::string> words{};
	size_t start(text.find_first_not_of(separators));
	while (start != std::string::npos) {
		size_t end{ text.find_first_of(separators, start + 1) };

		if (end == std::string::npos) {
			end = text.length();
		}
		
		std::string word{ text.substr(start, end - start) };
		if (std::toupper(word[0]) == std::toupper(character)) {
			words.push_back(word);
		}
		start = text.find_first_not_of(separators, end + 1);
	}
	for (std::string output : words) {
		std::cout << output << std::endl;
	}
}