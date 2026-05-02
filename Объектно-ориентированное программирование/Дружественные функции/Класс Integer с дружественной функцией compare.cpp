// Сделайте функцию compare, которая определена в предыдущем задании в классе Integer, дружественной.

#include <iostream>

class Integer
{
public:
    Integer(int number)
    {
        value = number;
    }
    friend int compare(const Integer& obj1, const Integer& obj2);
    void print() const
    {
        std::cout << "Value: " << value << std::endl;
    }
    int compare(int value2) { 
        return value - value2;
    }
private:
    int value;
};
int compare(const Integer& obj1, const Integer& obj2) {
    return obj1.value - obj2.value;
}


void print(const Integer& num1, const Integer& num2)
{   
    auto result = compare(num1, num2);
    if (result > 0)
    {
        std::cout << "num1 greater than num2" << std::endl;
    }
    else if (result < 0)
    {
        std::cout << "num1 less than num2" << std::endl;
    }
    else
    {
        std::cout << "num1 is equal to num2" << std::endl;
    }
}
int main()
{
    print(Integer{ 10 }, Integer{ 20 });  // num1 less than num2
    print(Integer{ 30 }, Integer{ 20 });  // num1 greater than num2
    print(Integer{ 10 }, Integer{ 10 });  // num1 is equal to num2
}