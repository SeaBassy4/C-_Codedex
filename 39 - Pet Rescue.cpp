#include <iostream>

class Cat
{
public:
    std::string name;
    std::string breed;
    int age;
    bool rescued;
    int mood = 5;
    int hunger = 5;

    void feed()
    {
        hunger = hunger + 1;
    }

    void play()
    {
        mood = mood + 1;
    }

    void status()
    {
        std::cout << "Mood: " << mood << "\nHunger: " << hunger;
    }

    Cat(std::string x, std::string y, int z, bool a, int b, int c)
    {
        name = x;
        breed = y;
        age = z;
        rescued = a;
        hunger = b;
        mood = c;
    }
};

int main()
{
    Cat Nyan("Nyan", "Sphinx", 4, false, 5, 6);
    Cat Neko("Neko", "Tabby", 9, true, 6, 5);

    std::cout << "Neko: \n";
    Neko.status();
    std::cout << "\n\n"
              << "Nyan: \n";
    Nyan.status();
    std::cout << "\n\nLet's feed and play with Neko\n";
    Neko.feed();
    Neko.play();
    std::cout << "Neko: \n";
    Neko.status();
}