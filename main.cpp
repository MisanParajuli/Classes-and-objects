#include <iostream>
using namespace std;

class Account {
private:
    double balance;

public:
    Account(double initialBalance) : balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    void addInterest() {
        double interest = getBalance() * interestRate / 100;
        deposit(interest);
    }
    double getBalance() const {
        return balance;
    }
};

int main() {

        SavingsAccount myaccount(1000,7);
        cout << myaccount.get_balance() << endl;
        myaccount.deposit(1000);
        cout << myaccount.get_balance() << endl;
        myaccount.addInterest();
        cout << myaccount.get_balance() << endl;


    return 0;
}