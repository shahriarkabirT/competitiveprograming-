#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Account {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    Account(string accNumber, string accHolderName, double initialBalance)
        : accountNumber(accNumber), accountHolderName(accHolderName), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
    }

    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return true;
        }
        return false;
    }

    double getBalance() {
        return balance;
    }

    void displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }

    string getAccountNumber() {
        return accountNumber;
    }
};

class MobileBankingSystem {
private:
    vector<Account> accounts;

public:
    void createAccount() {
        string accNumber, accHolderName;
        double initialBalance;

        cout << "Enter account number: ";
        cin >> accNumber;
        cout << "Enter account holder's name: ";
        cin.ignore();
        getline(cin, accHolderName);
        cout << "Enter initial balance: $";
        cin >> initialBalance;

        Account newAccount(accNumber, accHolderName, initialBalance);
        accounts.push_back(newAccount);

        cout << "Account created successfully." << endl;
    }

    void performTransaction() {
        string accNumber;
        int choice;
        double amount;

        cout << "Enter account number: ";
        cin >> accNumber;

        for (Account& account : accounts) {
            if (account.getAccountNumber() == accNumber) {
                cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice) {
                    case 1:
                        cout << "Enter the amount to deposit: $";
                        cin >> amount;
                        account.deposit(amount);
                        cout << "Deposit successful. Updated balance: $" << account.getBalance() << endl;
                        break;

                    case 2:
                        cout << "Enter the amount to withdraw: $";
                        cin >> amount;
                        if (account.withdraw(amount)) {
                            cout << "Withdrawal successful. Updated balance: $" << account.getBalance() << endl;
                        } else {
                            cout << "Insufficient balance." << endl;
                        }
                        break;

                    case 3:
                        cout << "Account Balance: $" << account.getBalance() << endl;
                        break;

                    default:
                        cout << "Invalid choice." << endl;
                        break;
                }

                return;
            }
        }

        cout << "Account not found." << endl;
    }
};

int main() {
    MobileBankingSystem bkash;

    while (true) {
        cout << "\nMobile Banking System (bkash)\n";
        cout << "1. Create Account\n2. Perform Transaction\n3. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                bkash.createAccount();
                break;

            case 2:
                bkash.performTransaction();
                break;

            case 3:
                cout << "Exiting the system. Goodbye!" << endl;
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
