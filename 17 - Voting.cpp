#include <iostream>

int main()
{
    int age = 18;
    bool citizen = true;
    bool registered = true;

    if (age >= 18)
    {
        if (citizen)
        {
            if (registered)
            {
                std::cout << "You can vote!";
            }
            else
            {
                std::cout << "You need to register first";
            }
        }
        else
        {
            std::cout << "You're not eligible to vote.";
        }
    }
    else
    {
        std::cout << "You're not old enought to vote.";
    }
}
