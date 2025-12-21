#include <iostream>
#include <string>

class Restaurant
{
public:
    std::string name;
    std::string category;
    double rating;
    std::string price;
    bool delivery;
};

int main()
{
    Restaurant peter_luger;
    peter_luger.name = "Peter Luger Steak House";
    peter_luger.category = "American";
    peter_luger.rating = 4.4;
    peter_luger.delivery = false;
}