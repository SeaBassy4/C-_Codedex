#include <iostream>
#include <vector>

int main()
{
    std::vector<int> num = {2, 4, 3, 6, 1, 9, 8, 0, 8, 5, 7, 3, 3};
    int even_sum = 0;
    int odds_product = 1;
    std::cout << "Sum of Even Numbers: \n";
    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] % 2 == 0)
        {
            even_sum = even_sum + num[i];
        }
    }
    std::cout << even_sum << "\n\n";

    std::cout << "Product of Odd Numbers: \n";

    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] % 2 != 0)
        {
            odds_product = odds_product * num[i];
        }
    }
    std::cout << odds_product;
}