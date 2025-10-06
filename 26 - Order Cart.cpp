#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> cart = {"🍕 Pepperoni pizza", "🥗 Garden salad", "🥤 Diet Coke"};
    cart.push_back("🥫 Marinara sauce");
    std::cout << cart[3] << "\n";
    cart.pop_back();
    std::cout << cart.size();
}