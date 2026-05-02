// Напишите функцию, которая считывает с консоли строку или массив символов и возвращает строку, где символы размещены в обратном порядке

#include <iostream>
#include <string>

std::string foo(std::string text) {
	const size_t length_of_text{ text.size() };

	for (size_t i{}; i < length_of_text / 2; i++) {
		char swap{text[i]};
		text[i] = text[length_of_text - i - 1];
		text[length_of_text - i - 1] = swap;
	}
	return text;
}

int main() {
	std::string input{};
	std::cout << "Enter a text: ";
	std::getline(std::cin, input);

	std::cout << "Swapped text: " << foo(input);
}