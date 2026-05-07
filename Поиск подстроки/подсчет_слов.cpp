/*
https://metanit.com/cpp/practice/12.php

Напишите программу, которая считывает текст.Найдите и сохраните каждое уникальное слово и количество его вхождений в тексте.Выведите слова и количество их вхождений.*/

#include <iostream>
#include <string>
#include <vector>

int main() {
	std::string input;
	std::cout << "Enter a text: ";
	getline(std::cin, input);

	const std::string exp(" ,.:;\"'\n!?");

	std::vector<std::string> words;
	std::vector<size_t> count;
	size_t start = input.find_first_not_of(exp);

	while (start != std::string::npos) {
		size_t end{ input.find_first_of(exp, start + 1) };

		if (end == std::string::npos) {
			end = input.size();
		}

		std::string word{ input.substr(start, end - start) };
		bool found{ false };
		for (size_t i{}; i < words.size(); i++) {
			if (words[i] == word) {
				++count[i];
				found = true;
				break;
			}
		}
		if (!found) {
			words.push_back(word);
			count.push_back(1);
		}
		start = input.find_first_not_of(exp, end + 1);
	}
	for (int i{}; i < words.size(); i++) {
		std::cout << words[i] << "\t" << count[i];
	}
}