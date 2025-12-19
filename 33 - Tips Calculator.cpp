#include <iostream>

int tips_menu()
{
    int percentage;
    std::cout << "Will you be leaving a tip? Input: \n";
    std::cin >> percentage;
    return percentage;
}

float tips_calculator(int x, float y)
{
    float total;
    float tip_amount;
    tip_amount = (x * y) / 100;
    total = y + tip_amount;
    return total;
}

int main()
{
    int tip_percentage;
    float check;
    float total;

    std::cout << "What did the check come out to?: \n";
    std::cin >> check;

    tip_percentage = tips_menu();

    std::cout << "The total comes out to: " << tips_calculator(tip_percentage, check);
}