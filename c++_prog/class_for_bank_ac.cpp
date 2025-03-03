// 6. Introduction to Object-oriented Programming- prog 2- Class for Bank Account
#include <iostream>
using namespace std;
class Bank
{
  int acc_no;
  string name;
  int balance;

public:
  void get_details()
  {
    cout << "\nEnter the account number : ";
    cin >> acc_no;
    cout << "\nEnter the account holder's name : ";
    cin >> name;
    cout << "\nEnter the account's balance : ";
    cin >> balance;
  }
  void deposite()
  {
    int temp;
    cout << "\nEnter the amount you want to deposite : ";
    cin >> temp;
    balance += temp;
    cout << "\nNew balance : " << balance;
  }
  void withdraw()
  {
    int temp;
    cout << "\nEnter the amount you want to withdraw : ";
    cin >> temp;
    if (temp > balance)
    {
      cout << "Insufficient balance";
    }
    else
    {
      balance -= temp;
    }
    cout << "\nNew balance : " << balance;
  }
};

main()
{
  Bank b;
  b.get_details();
  b.deposite();
  b.withdraw();
}