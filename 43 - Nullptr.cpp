#include <iostream>
#include <string>

void reviewAction(const std::string &name, const std::string *extraComment)
{

    if (extraComment == nullptr)
    {
        std::cout << "Thanks for the review, " << name << "!\n";
    }
    else
    {
        std::cout << "Thanks for the review, " << name << "! We'll get back to you!\n";
    }
}

int main()
{
    std::string name = "David";
    std::string extraComment = "Good food!";

    reviewAction(name, &extraComment);
}