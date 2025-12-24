#include <iostream>
#include <string>

int main()
{
    int x;
    double y;
    char z = 'a';
    std::string a;

    std::cout << &x << "\n";
    std::cout << &y << "\n";
    std::cout << &z << "\n";
    std::cout << &a << "\n";
}