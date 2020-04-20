#include <iostream>

void operation(double x, double y, char ch)
{
	if (ch == '+')
		std::cout << x + y << std::endl;
	if (ch == '-')
		std::cout << x - y << std::endl;
	if (ch == '*')
		std::cout << x * y << std::endl;
	if (ch == '/')
		std::cout << x / y << std::endl;
}

int main()
{
    std::cout << "Enter a double value: " << std::endl;
    double fValue;
    std::cin >> fValue;
    std::cout << "Enter a second double value: " << std::endl;
    double sValue;
    std::cin >> sValue;
    std::cout << "Enter one of the following: +, -, *, or /: " << std::endl;
    char ch;
    std::cin >> ch;

    operation(fValue, sValue, ch);

   	return 0;
}