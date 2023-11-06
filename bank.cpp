#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;

class Bank {
	string name, address;
	char acc_type;
	float balance;

public:
	void open_account();
	void deposit_money();
	void withdraw_money();
	void display_account();
	void delete_account(); 
};


void Bank::open_account()
{
	name = "Aman Jhurani";
	cout << "Enter your full name: "
		<< name << endl;
	address = "Surat";
	cout << "Enter your address: "
		<< address << endl;
	acc_type = 'S';
	cout << "What type of account you want"
		<< " to open saving(S) or Current(C): "
		<< acc_type << endl;
	balance = 8000;
	cout << "Enter How much money you want to deposit: "
		<< balance << endl;
	cout << "Account Created Successfully"<<endl;
}


void Bank::deposit_money()
{
	int Amount;
	Amount = 9500;
	cout << "Enter how much money"
		<< " you want to deposit: "
		<< Amount << endl;
	balance += Amount;
	cout << "\n Available Balance: "
		<< balance<<endl;
}


void Bank::display_account()
{
	cout << "Name: " << name << endl
		<< "Address: " << address << endl
		<< "Type: " << acc_type << endl
		<< "Balance: " << balance << endl
		<< endl;
}


void Bank::withdraw_money()
{
	float amount;
	amount = 3200;
	cout << "Enter how much money "
		<< "you want to withdraw: "
		<< amount << endl;
	balance -= amount;
	cout << "\n Available balance: "
		<< balance<<endl;
}

void Bank::delete_account()
{
	name = "";
	address = "";
	acc_type = ' ';
	balance = 0;
	cout << "Account Deleted Successfully"<<endl;
}


	int main()
{
    int choice;

    // Creating Customer Object of Bank Class
    Bank customer;

    do {
        cout << "Main Menu" << endl;
        cout << "1) Open account" << endl;
        cout << "2) Deposit money" << endl;
        cout << "3) Withdraw money" << endl;
        cout << "4) Display Account" << endl;
        cout << "5) Delete Account" << endl;
        cout << "6) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                customer.open_account();
                break;
            case 2:
                customer.deposit_money();
                break;
            case 3:
                customer.withdraw_money();
                break;
            case 4:
                customer.display_account();
                break;
            case 5:
                customer.delete_account();
                break;
            case 6:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 6);

    return 0;
}


