// Создайте класс Rational, который представляет дробь. Определите в нем переменные, которые представляют числитель и знаменатель. Также определите для этого класса операторы сложения и умножения, а также оператор вывода на консоль.

#include <iostream>

class Rational {
public:
	Rational(int n, int d) {
		numerator = n;
		if (d != 0)
			denominator = d;
		else
			denominator = 1;
	};
	Rational operator+(const Rational& argument) const {
		int d{ denominator };
		int n{ numerator + argument.numerator };
		if (denominator != argument.denominator) {
			n = numerator * argument.denominator + argument.numerator * denominator;
			d = denominator * argument.denominator;
		}
		return Rational(n, d);
	};
	Rational operator*(const Rational& argument) const {
		return Rational(numerator * argument.numerator, denominator * argument.denominator);
	};
	int getNumerator() const {
		return numerator;
	}
	int getDenominator() const {
		return denominator;
	}
private:
	int numerator;
	int denominator;
};
std::ostream& operator<<(std::ostream& stream, const Rational& argument) {
	return stream << argument.getNumerator() << "/" << argument.getDenominator();
};

int main() {
	Rational test1(3, 5);
	Rational test2(4, 5);
	Rational result{test1 + test2};
	Rational result1{test1 * test2};
	std::cout << result << "\t" << result1;
}
