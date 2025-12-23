#include <iostream>

class BankAccount
{
public:
    std::string name;
    int account_id;
    std::string account_type;
    double balance;

    void deposit(double x)
    {
        balance = balance + x;
    }

    void withdraw(double x)
    {
        balance = balance - x;
    }

    void display_balance()
    {
        std::cout << "This is your current balance: $" << balance;
    }
};

int main()
{
    BankAccount myAccount;
    myAccount.deposit(96);
    myAccount.withdraw(25);
    myAccount.display_balance();
}