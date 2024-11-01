

#include "BankAccount.h"


void BankAccount::setName(string n){
  customerName = n;
}

void BankAccount::setBalance(float bal){
  balance = bal;
}

BankAccount::BankAccount(string n, float bal){
  setName(n);
  setBalance(bal);
}

string BankAccount::getName(){
  return customerName;
}

float BankAccount::getBalance(){
  return balance;
}


void BankAccount::deposit(float dep){
  setBalance(balance + dep);
}

void BankAccount::withdraw(float draw){
  setBalance(balance-draw);
}

BankAccount::~BankAccount(){
  cout << "Closed " << customerName << "'s Bank Account" << endl;
}
