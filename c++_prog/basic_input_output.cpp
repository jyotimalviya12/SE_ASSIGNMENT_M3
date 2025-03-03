
// 1. Introduction to c++ - prog 2- Basic input/output
#include <iostream>
using namespace std;

main()
{
  string name;
  int age;
  cout << "\nEnter your name : ";
  cin >> name;
  cout << "\nEnter your age : ";
  cin >> age;
  cout << "\nHello " << name << ", " << age << " years old.";
}
