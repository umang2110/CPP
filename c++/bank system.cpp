#include <iostream>
#include <string>
using namespace std;

class BankAccount {
protected:
    int accountNumber;
    string accountHolderName;
private:
    double balance;

public:
    void setAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful.\n";
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        } else {
            cout << "Insufficient balance!\n";
        }
    }

    double getBalance() {
        return balance;
    }

    void displayAccountInfo() {
        cout << "Account No: " << accountNumber << endl;
        cout << "Holder Name: " << accountHolderName << endl;
        cout << "Balance: ?" << balance << endl;
    }
};

class SavingsAccount : public BankAccount {
public:
    double interestRate;

    void setInterest(double rate) {
        interestRate = rate;
    }

    void calculateInterest() {
        double interest = getBalance() * interestRate / 100;
        cout << "Savings Interest: ?" << interest << endl;
    }
};

class CheckingAccount : public BankAccount {
public:
    double overdraftLimit;

    void setOverdraft(double limit) {
        overdraftLimit = limit;
    }

    void checkOverdraft(double amount) {
        if (amount <= getBalance() + overdraftLimit)
            cout << "Withdrawal allowed under overdraft.\n";
        else
            cout << "Overdraft limit exceeded!\n";
    }
};

class FixedDepositAccount : public BankAccount {
public:
    int term;

    void setTerm(int t) {
        term = t;
    }

    void calculateInterest() {
        double interest = getBalance() * 0.06 * (term / 12.0); // 6% annual
        cout << "FD Interest for " << term << " months: ?" << interest << endl;
    }
};

int main() {
    SavingsAccount savings;
    CheckingAccount checking;
    FixedDepositAccount fd;

    int choice;
    do {
        cout << "\n====== Bank Menu ======\n";
        cout << "1. Create Savings Account\n";
        cout << "2. Create Checking Account\n";
        cout << "3. Create Fixed Deposit Account\n";
        cout << "4. Deposit\n";
        cout << "5. Withdraw\n";
        cout << "6. Display Info\n";
        cout << "7. Calculate Interest / Overdraft\n";
        cout << "8. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                savings.setAccount(101, "Raj", 5000);
                savings.setInterest(5.0);
                cout << "Savings account created.\n";
                break;
            case 2:
                checking.setAccount(102, "Simran", 4000);
                checking.setOverdraft(2000);
                cout << "Checking account created.\n";
                break;
            case 3:
                fd.setAccount(103, "Aman", 10000);
                fd.setTerm(12);
                cout << "Fixed Deposit account created.\n";
                break;
            case 4: {
                int accType;
                double amt;
                cout << "1. Savings  2. Checking  3. FD\nEnter account type: ";
                cin >> accType;
                cout << "Enter amount to deposit: ?";
                cin >> amt;
                if (accType == 1) savings.deposit(amt);
                else if (accType == 2) checking.deposit(amt);
                else if (accType == 3) fd.deposit(amt);
                break;
            }
            case 5: {
                int accType;
                double amt;
                cout << "1. Savings  2. Checking  3. FD\nEnter account type: ";
                cin >> accType;
                cout << "Enter amount to withdraw: ?";
                cin >> amt;
                if (accType == 1) savings.withdraw(amt);
                else if (accType == 2) checking.withdraw(amt);
                else if (accType == 3) fd.withdraw(amt);
                break;
            }
            case 6: {
                int accType;
                cout << "1. Savings  2. Checking  3. FD\nEnter account type: ";
                cin >> accType;
                if (accType == 1) savings.displayAccountInfo();
                else if (accType == 2) checking.displayAccountInfo();
                else if (accType == 3) fd.displayAccountInfo();
                break;
            }
            case 7: {
                int accType;
                cout << "1. Savings  2. Checking  3. FD\nEnter account type: ";
                cin >> accType;
                if (accType == 1) savings.calculateInterest();
                else if (accType == 2) {
                    double amt;
                    cout << "Enter amount to withdraw (for overdraft check): ?";
                    cin >> amt;
                    checking.checkOverdraft(amt);
                }
                else if (accType == 3) fd.calculateInterest();
                break;
            }
            case 8:
                cout << "Thank you for using our bank system!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 8);

    return 0;
}

