#include <iostream>

class Car
{
public:
    std::string brand;
    std::string model;
    int year;
    bool classic;

    Car(std::string x, std::string y, int z, bool a)
    {
        brand = x;
        model = y;
        year = z;
        classic = a;
    }
};

int main()
{
    Car Mustang("Ford", "Mustang", 1965, true);
    Car Jaguar("Jaguar", "E-Type", 1961, true);

    std::cout << "This is a " << Mustang.brand << " " << Mustang.model << ".";
}