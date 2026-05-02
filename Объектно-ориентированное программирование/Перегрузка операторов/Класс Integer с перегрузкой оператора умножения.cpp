// Дан класс:

//Определите для класса Integer оператор, который позволяет умножать объект Integer на число. Причем определите версии для умножения как на целое, так и на дробное число.

#include <iostream>

class Integer
{
public:
    Integer(double n)
    {
        value = n;
    }

    void print()  const
    {
        std::cout << "value: " << value << std::endl;
    }
    Integer operator*(double) const;
private:
    double value;
};
Integer Integer::operator*(double n) const {
    return Integer{ value * n };
};

int main() {
    Integer test1{ 15 };
    Integer test2{ test1 * 15 };
    test2.print();
}