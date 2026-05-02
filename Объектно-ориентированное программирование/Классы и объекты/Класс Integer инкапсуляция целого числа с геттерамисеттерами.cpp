//Создайте класс Integer с одной приватной переменной типа int.Определите конструктор класса, который выводит сообщение при создании объекта.Определите функции для получения и установки переменной и вывода ее значения.В функции main создайте объект класса Integer и вызовите у него функции класса, получая, устанавливая и выводя значение переменной каждого объекта.

#include <iostream>

class Integer {
private:
	int member_of_class{};

public:
	Integer(int member_of_class_construcor) {
		member_of_class = member_of_class_construcor;
		std::cout << "The object was created" << std::endl;
	}
	int GetValue() {
		return member_of_class;
	}
	void SetValue(int member_of_class_constructor) {
		member_of_class = member_of_class_constructor;
	}
	void OutputValue() {
		std::cout << member_of_class << std::endl;
	}
};
 
int main() {
	Integer object{ 10 };
	object.GetValue();
	object.OutputValue();
	object.SetValue(14);
	object.OutputValue();
}

