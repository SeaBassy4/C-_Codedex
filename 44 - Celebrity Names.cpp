#include <iostream>

int main()
{
    std::string Celeb1 = "Giancarlo Esposito";
    std::string Celeb2 = "Bryan Cranston";
    std::string Celeb3 = "Aaron Paul";

    std::string &ref1 = Celeb1;
    std::string &ref2 = Celeb2;
    std::string &ref3 = Celeb3;

    ref1 = "Gus";
    ref2 = "Walter";
    ref3 = "Jesse";

    std::cout << "Actor: " << Celeb1 << ". Character: " << ref1 << ".\n";
}