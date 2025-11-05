#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    string accountType;
    double balance;

public:
    void assignInitialValues(string depositorName, int accNo, string accType, double initialBalance) {
        name = depositorName;
        accountNumber = accNo;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited successfully.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        } else {
            cout << "Insufficient balance!\n";
        }
    }

    void display() const {
        cout << "Depositor Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.assignInitialValues("Savitri Ashok Mote", 10012345, "Savings", 5000.0);

    acc.deposit(1500.0);
    acc.withdraw(2000.0);

    cout << "\nAfter transactions:\n";
    acc.display();

    return 0;
}
