#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accNo;
    string name;
    double balance;
public:
    void createAccount(int acc, string n, double bal) {
        accNo = acc;
        name = n;
        balance = bal;
    }
    int getAccNo() {
        return accNo;
    }
    double getBalance() {
        return balance;
    }
    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Invalid amount!\n";
            return;
        }
        balance += amount;
        cout << "₹" << amount << " deposited successfully.\n";
        cout << "Current Balance: ₹" << balance << endl;
    }
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid amount!\n";
            return;
        }
        if (balance - amount < 1000) {
            cout << "Withdrawal Failed! Minimum balance of ₹1000 must be maintained.\n";
            return;
        }
        balance -= amount;
        cout << "₹" << amount << " withdrawn successfully.\n";
        cout << "Current Balance: ₹" << balance << endl;
    }

    void transfer(BankAccount &receiver, double amount) {
        if (amount <= 0) {
            cout << "Invalid amount!\n";
            return;
        }

        if (balance - amount < 1000) {
            cout << "Transfer Failed! Minimum balance of ₹1000 must be maintained.\n";
            return;
        }

        balance -= amount;
        receiver.balance += amount;

        cout << "₹" << amount << " transferred successfully.\n";
        cout << "Sender Balance   : ₹" << balance << endl;
        cout << "Receiver Balance : ₹" << receiver.balance << endl;
    }

    void display() {
        cout << "\n---------------------------\n";
        cout << "Account Number : " << accNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Balance        : ₹" << balance << endl;
        cout << "---------------------------\n";
    }
};

int main() {
    const int MAX_ACCOUNTS = 100;
    BankAccount accounts[MAX_ACCOUNTS];
    int count = 0;
    int choice;

    do {
        cout << "\n\t BANK MANAGEMENT SYSTEM \t\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Transfer Money\n";
        cout << "5. Display Account Details\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            if (count >= MAX_ACCOUNTS) {
                cout << "Account limit reached!\n";
                break;
            }
            int accNo;
            string name;
            double balance;
            cout << "Enter Account Number: ";
            cin >> accNo;
            bool exists = false;
            for (int i = 0; i < count; i++) {
                if (accounts[i].getAccNo() == accNo) {
                    exists = true;
                    break;
                }
            }
            if (exists) {
                cout << "Account number already exists!\n";
                break;
            }

            cin.ignore();
            cout << "Enter Account Holder Name: ";
            getline(cin, name);

            cout << "Enter Initial Balance (Minimum ₹1000): ";
            cin >> balance;

            if (balance < 1000) {
                cout << "Account cannot be created with balance less than ₹1000.\n";
                break;
            }
            accounts[count].createAccount(accNo, name, balance);
            count++;
            cout << "Account created successfully!\n";
            break;
        }
        case 2: {
            int accNo;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accNo;

            bool found = false;

            for (int i = 0; i < count; i++) {
                if (accounts[i].getAccNo() == accNo) {
                    cout << "Enter Amount to Deposit: ";
                    cin >> amount;

                    accounts[i].deposit(amount);
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Account not found!\n";
            break;
        }
        case 3: {
            int accNo;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accNo;

            bool found = false;

            for (int i = 0; i < count; i++) {
                if (accounts[i].getAccNo() == accNo) {
                    cout << "Enter Amount to Withdraw: ";
                    cin >> amount;
                    accounts[i].withdraw(amount);
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Account not found!\n";
            break;
        }
        case 4: {
            int senderAcc, receiverAcc;
            double amount;

            cout << "Enter Sender Account Number: ";
            cin >> senderAcc;

            cout << "Enter Receiver Account Number: ";
            cin >> receiverAcc;

            cout << "Enter Amount to Transfer: ";
            cin >> amount;

            int senderIndex = -1;
            int receiverIndex = -1;
            for (int i = 0; i < count; i++){
                if (accounts[i].getAccNo() == senderAcc)
                    senderIndex = i;
                if (accounts[i].getAccNo() == receiverAcc)
                    receiverIndex = i;
            }
            if(senderIndex == -1){
                cout << "Sender account not found!\n";
            }
            else if(receiverIndex == -1){
                cout << "Receiver account not found!\n";
            }
            else{
                accounts[senderIndex].transfer(
                    accounts[receiverIndex],
                    amount
                );
            }
            break;
        }
        case 5: {
            int accNo;
            cout << "Enter Account Number: ";
            cin >> accNo;

            bool found = false;

            for (int i = 0; i < count; i++) {
                if (accounts[i].getAccNo() == accNo) {
                    accounts[i].display();
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Account not found\n";
            break;
        }
        case 6:
            cout << "\nThank you.\n";
            break;
        default:
            cout << "Invalid Choice! Try Again.\n";
        }
    } while (choice != 6);
    return 0;
}