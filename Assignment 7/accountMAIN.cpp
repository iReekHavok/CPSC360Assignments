#include <iostream>
#include "account.h"
using std::cout;
using std::cin;
using std::endl;

int main() {
  Account acct("Account Boi", 420, 9999);
	CheckingAcct checking("Checking Boi", 111, 123456789);
	LoanAcct loan("Loan Boi", 643, .12, 50000);

	//Account
	cout << "Account Info\nAccount Name:\t" << acct.getName() << endl;
	cout << "Account Number:\t" << acct.getAcctNum() << endl;
	cout << "Balance:\t$" << acct.getBalance() << "\n"<< endl;

	//Checking
	cout << "Checking Account Info\nAccount Name:\t" << checking.getName() << endl;
	cout << "Account Number:\t" << checking.getAcctNum() << endl;
	cout << "Balance:\t$" << checking.getBalance() << endl;
	cout << "Depositing $1...";
	checking.deposit(1);
	cout << "Balance:\t$" << checking.getBalance()<<endl;
	cout << "Withdrawing $1000...";
	checking.withdraw(1000);
	cout << "Balance:\t$" << checking.getBalance()<<"\n"<<endl;

	//Loan
	cout << "Loan Account Info\nAccount Name:\t" << loan.getName() << endl;
	cout << "Account Number:\t" << loan.getAcctNum() << endl;
	cout << "Loan Balance:\t$" << loan.getBalance() << endl;
	int interest = loan.getInterest()*100;
	cout << "Interest Rate:\t" << interest << "%" <<endl;
	cout << "Received $5 for loan payment since you're broke...";
	loan.payBalance(5);
	cout << "New Loan Balance:\t$" << loan.getBalance() << endl;
	cout << "Monthly interest:\t$";
	loan.calcInterest();
	cout << loan.getBalance();
  cout << "You be poor, m8" << endl;

  return 0;
}
