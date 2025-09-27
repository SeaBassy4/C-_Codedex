#include <iostream>
#include <cstdio>

int main()
{
    srand(time(NULL));
    int dice = std::rand() % 6; // Generates a random number that's either 0, 1, 2, 3, 4, 5
    if (dice == 0)
    {
        std::cout << "Don't pursue happiness – create it.";
    }
    else if (dice == 1)
    {
        std::cout << "All things are difficult before they are easy.";
    }
    else if (dice == 2)
    {
        std::cout << "The early bird gets the worm, but the second mouse gets the cheese.";
    }
    else if (dice == 3)
    {
        std::cout << "Someone in your life needs a letter from you.";
    }
    else if (dice == 4)
    {
        std::cout << "The fortune you search for is in another cookie.";
    }
    else if (dice == 5)
    {
        std::cout << "Help! I'm being held prisoner in a Chinese bakery!";
    }
}
