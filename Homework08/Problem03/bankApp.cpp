/*
  This program takes no input arguments and is an application of the 
  Bank Account class. It creates 5 bank accounts, changes their
  account balance, and then exits the program
*/

#include <iostream>
#include "BankAccount.h"

using namespace std;

int main(){

  BankAccount jackAccount("Jack Smith",50);
  BankAccount jillAccount("Jill Brian",100);
  BankAccount bankArray[3] = {
      BankAccount("Ralph Kramden",10),
      BankAccount("Alice Kramden",20),BankAccount("Ed Norton",30)};

  cout << "Name: " << jackAccount.getName()<<" Balance: " << jackAccount.getBalance() << endl;
  cout << "Name: " << jillAccount.getName()<<" Balance: " << jillAccount.getBalance() << endl;
  cout << "Name: " << bankArray[0].getName()<<" Balance: " << bankArray[0].getBalance() << endl;
  cout << "Name: " << bankArray[1].getName()<<" Balance: " << bankArray[1].getBalance() << endl;
  cout << "Name: " << bankArray[2].getName()<<" Balance: " << bankArray[2].getBalance() << endl;
  cout << endl;
  cout << "Computing Changes ..." << endl;
  //Deposits
  jackAccount.deposit(30);
  jillAccount.deposit(30);
  bankArray[0].deposit(30);
  bankArray[1].deposit(30);
  bankArray[2].deposit(30);
  //Withdraw
  jackAccount.withdraw(20);
  jillAccount.withdraw(20);
  bankArray[0].withdraw(20);
  bankArray[1].withdraw(20);
  bankArray[2].withdraw(20);

  cout << "Name: " << jackAccount.getName()<<" Balance: " << jackAccount.getBalance() << endl;
  cout << "Name: " << jillAccount.getName()<<" Balance: " << jillAccount.getBalance() << endl;
  cout << "Name: " << bankArray[0].getName()<<" Balance: " << bankArray[0].getBalance() << endl;
  cout << "Name: " << bankArray[1].getName()<<" Balance: " << bankArray[1].getBalance() << endl;
  cout << "Name: " << bankArray[2].getName()<<" Balance: " << bankArray[2].getBalance() << endl;
  cout << endl;


}
