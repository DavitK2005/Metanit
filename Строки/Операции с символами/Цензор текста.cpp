/*https://metanit.com/cpp/practice/13.php

Напишите программу, которая считывает с клавиатуры некоторый текст произвольный длины.Далее запрашивает ввод слова, которое должно быть заменено в тексте на столько звездочек, сколько символов в слове.Заменяются только целые слова.Причем надо заменить все вхождения слова вне зависимости от его регистра.Затем выведите на консоль полученную новую строку.*/

#include <iostream>
#include <string>

int main() {
	std::string text{};
	std::string word{};

	std::cout << "Enter a text: ";
	std::getline(std::cin, text);

	std::cout << "Enter a word: ";
	std::cin >> word;

	std::string lower_word{};

	for (char ch : word) {
		lower_word += std::tolower(ch);
	}

	const std::string separators{ " ,;:'\".!?'\n" };

	size_t start{ text.find_first_not_of(separators) };
	while (start != std::string::npos) {
		size_t end{ text.find_first_of(separators, start + 1) };

		if (end == std::string::npos) {
			end == text.length();
		}

		if (end - start == word.length()) {
			
			bool check{ true };
			for (size_t i{ start }; i < end; i++) {
				if (lower_word[i - start] != std::tolower(text[i])) {
					check = false;
					break;
				}
			}
			if (check) {
				for (size_t i{ start }; i < end; i++) {
					text[i] = '*';
				}
			}
		}
		start = text.find_first_not_of(separators, end + 1);
	}
	std::cout << "The text is: " << text;
}
