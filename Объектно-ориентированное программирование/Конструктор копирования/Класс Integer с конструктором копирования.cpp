// Дан следующий класс Integer, который представляет число:

#include <iostream>

class Integer
{
public:
    Integer(int number)
    {
        value = number;
    }
    Integer(const Integer &number_2) {
        value = number_2.value;
    }
    void print() const
    {
        std::cout << "Value: " << value << std::endl;
    }
private:
    int value;
};

int main() {
    Integer member_1(45);
    Integer member_2 = member_1;
    member_2.print();
}