// Дан следующий класс Integer, который представляет число:
// Добавьте в него функцию, которая сравнивает текущий объект с другим объектом Integer, переданным в качестве аргумента. Функция должна возвращать число больше нуля, если текущий объект больше аргумента; меньше нуля, если текущий объект меньше аргумента, и 0, если объекты равны.

//В функции main создайте несколько объектов Integer и сравните их.

#include <iostream>

class Integer
{
public:
    Integer(int number)
    {
        value = number;
    }
    const int compare(const Integer& object1) {
        return value - object1.value;
    }
    void print() const
    {
        std::cout << "Value: " << value << std::endl;
    }
private:
    int value;
};
void function(Integer& first_number, Integer& second_number) {
    auto result = first_number.compare(second_number);
    if (result > 0) {
        std::cout << "1"<<std::endl;
    }
    else if (result < 0) {
        std::cout << "-1" << std::endl;
    }
    else {
        std::cout << "0";
    }
}

int main() {
    Integer first_test(40);
    Integer second_test(50);
    function(first_test, second_test);
    Integer third_test(50);
    Integer fourth_test(40);
    function(third_test, fourth_test);
    Integer final_test(40);
    Integer final2_test(40);
    function(final_test, final2_test);
}