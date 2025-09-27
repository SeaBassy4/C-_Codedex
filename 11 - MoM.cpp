#include <iostream>
int main()
{
    int month1;
    int month2;
    std::cout << "Give me a month: ";
    std::cin >> month1;
    std::cout << "Give me another: ";
    std::cin >> month2;

    std::cout << ((month2 - month1) / (double)month1) * 100;
}