#include <iostream>
#include "account.h"
using std::cout;
using std::endl;
using std::string;

//default constructor
Account::Account() {
  OWNERNAME = "N/A";
  ACCTNUM = 0;
  BALANCE = 0.00;
}

//other constructor
Account::Account(string n, int a, double b) {
  OWNERNAME = n;
  ACCTNUM = a;
  BALANCE = b;
}

//setters
void Account::setName(string name) {
  OWNERNAME = name;
}

void Account::setAcctNum(int acctnum) {
  ACCTNUM = acctnum;
}

void Account::setBalance(double balance) {
  BALANCE = balance;
}

//others
CheckingAcct::CheckingAcct(string name, int acct, double bal) : Account(n, a, b) {
  OWNERNAME = n;
  ACCTNUM = a;
  BALANCE = b;
}

void CheckingAcct::Deposit(double amount) {
  balance += amount;
}

void CheckingAcct::Withdraw(double amount) {
  balance -= amount;
}

LoanAcct::LoanAcct(string name, int acct, double interest, double bal) : Account(n, a, b) {
  OWNERNAME = n;
  ACCTNUM = a;
  BALANCE = b;
  intRate = interest;
}

double LoanAcct::getInterest() {
  return intRate;
}

void LoanAcct::setInterest(double interest) {
  intRate = interest;
}

void LoanAcct::PayBalance(double amount) {
  balance -= amount;
}

void LoanAcct::CalcInterest() {
  float temp = intRate * balance;
  balance -= temp;
}
