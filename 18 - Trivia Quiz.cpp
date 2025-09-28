#include <iostream>

int main()
{
    int answer;
    std::cout << "Q1) What is the name of the world's longest river? 💧\n\n";
    std::cout << "1) Missouri River\n";
    std::cout << "2) Nile\n";
    std::cout << "3) Amazon River\n";
    std::cout << "4) Yangtze River\n";

    std::cin >> answer;

    if (answer == 2)
    {
        std::cout << "You got it right!";
    }
    else
    {
        std::cout << "Oops, that was wrong. :/";
    }
}
