#include <iostream>

int main()
{
    int answer = 9;
    int guess;
    std::cout << "Pick a number between 1 and 10: \n";
    std::cin >> guess;
    while (guess != answer)
    {
        std::cout << "Woops! Guessed Wrong. Try again!\n";
        std::cin >> guess;
    }

    std::cout << "You got it!";
}