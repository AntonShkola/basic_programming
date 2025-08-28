#include<iostream>
#include<string>

using namespace std;

struct Bills
{
	string personName;
	long long accountNumber;
	double amountMoney;
};

void updateBills(Bills& account, double newBalance)
{
	account.amountMoney = newBalance;
}

int main()
{
	Bills account;

	cout << "Enter account number: " << endl;
	cin >> account.accountNumber;
	cout << endl;

	cout << "Enter user name: " << endl;
	cin.ignore();
	getline(cin, account.personName);
	cout << endl;

	cout << "Enter balance: " << endl;
	cin >> account.amountMoney;
	cout << endl;

	double newBalance;
	cout << "Enter new balance: ";
	cin >> newBalance;
	cout << endl;

	updateBills(account, newBalance);

	cout << "Your name: " << account.personName << endl;
	cout << "Your account: " << account.accountNumber << endl;
	cout << "Your balance: " << account.amountMoney << endl;

	return 0;
}