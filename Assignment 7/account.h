#ifndef ACCOUNT_H
#define ACCOUNT_H
using std::string;

class Account {
protected:
  string OWNERNAME;
  int ACCTNUM;
  double BALANCE;

public:
  //constructors
  Account();
  Account(string n, int a, double b);

  //getters
  string getName() { return OWNERNAME; }
  int getAcctNum() { return ACCTNUM; }
  double getBalance() { return BALANCE; }

  //setters
  void setName(string name);
  void setAccNum(int acctnum);
  void setBalance(double balance);


};

class CheckingAcct : public Account {
public:
  CheckingAcct(string name, int acct, double bal);
  void Deposit(double amount);
  void Withdraw(double amount);
};

class LoanAcct : public Account {
private:
  double intRate;
public:
  LoanAcct(string name, int acct, double interest, double bal);
  void payBalance(double amount);
  void calcInterest();

  double getInterest();
  void setInterest(double interest);
};

#endif
