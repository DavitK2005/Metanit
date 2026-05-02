//Возьмите класс Integer из предыдущего задания

#include <iostream>

class Integer {
public:
	Integer(int);
	int GetValue();
	void SetValue(int);
	void OutputValue();

private:
	int value;
};

Integer::Integer(int number) {
	value = number;
	std::cout << "Object is created." << std::endl;
}

int Integer::GetValue() {
	return value;
}
void Integer::SetValue(int number) {
	value = number;
}
void Integer::OutputValue() {
	std::cout << value << std::endl;
}

int main() {
	Integer object{ 10 };
	object.GetValue();
	object.OutputValue();
	object.SetValue(14);
	object.OutputValue();
}