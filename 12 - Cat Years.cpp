#include <iostream>

int main()
{
    int catYears;
    int humanYears;
    std::cout << "Welcome to the Cat Years program! This only works for kitties older that 2 years old.";
    std::cout << "\n";
    std::cout << "Enter your cat's age: ";
    std::cin >> catYears;
    humanYears = ((catYears - 2) * 4) + 24;
    std::cout << "Your cat is " << humanYears << " years old in human years.";
}