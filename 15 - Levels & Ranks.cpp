#include <iostream>

int main()
{
    int level = 5;
    if (level < 6)
    {
        std::cout << "Bronze.";
    }
    else if (level < 11)
    {
        std::cout << "Silver.";
    }
    else if (level < 16)
    {
        std::cout << "Gold.";
    }
    else if (level < 21)
    {
        std::cout << "Platinum.";
    }
    else
    {
        std::cout << "Diamond.";
    }
}
