#include <iostream>
#include <string>

class WealthyFamily
{
public:
    std::string name;
    int networth;
};

int main()
{

    WealthyFamily Perez;
    Perez.name = "Perez";
    Perez.networth = 1000000;

    std::cout << "The " << Perez.name << "'s:\n";
    std::cout << "We are worth $" << Perez.networth << "!";
}