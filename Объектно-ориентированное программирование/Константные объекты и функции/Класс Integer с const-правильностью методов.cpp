// Дан следующий класс Integer, который хранит некоторое число: 
// Исправьте класс, сделав константными все функции, которые можно сделать константными. Определите в функции main переменную и константу этого класса Integer и и проверьте, какие операции можно применять к ним. 

#include <iostream> 
class Integer {
public:
	Integer(int number);
	int getValue() const;
	void setValue(int number);
	void print() const;
private:
	int value;
};
Integer::Integer(int number)
{
	value = number; std::cout << "Object created" << std::endl;
}
int Integer::getValue() const
{
	return value;
}
void Integer::setValue(int number)
{
	value = number;
}
void Integer::print() const
{
	std::cout << "Value: " << value << std::endl;
}
int main()
{
	Integer first_test(40);
	const Integer second_test(50);
	
	first_test.print();
	first_test.setValue(50);
	first_test.print();


	second_test.print();
	second_test.print();
}	