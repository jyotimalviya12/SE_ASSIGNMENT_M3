// 2. Variables, Data types and Operators- prog 3- Operator demonstration
#include <iostream>
using namespace std;

main()
{
  int a = 10, b = 2;
  cout << "a = " << a << "\n"
       << "b = " << b << "\n";
  cout << "\n--------------- Arethmetic Operators ---------------\n\n";
  cout << "a + b = " << a + b << "\n";
  cout << "a - b = " << a - b << "\n";
  cout << "a x b = " << a * b << "\n";
  cout << "a / b = " << a / b << "\n";
  cout << "\n\n--------------- Relational Operators ---------------\n\n";
  cout << "a < b = " << (a < b) << "\n";
  cout << "a <= b = " << (a <= b) << "\n";
  cout << "a > b = " << (a > b) << "\n";
  cout << "a >= b = " << (a >= b) << "\n";
  cout << "a == b = " << (a == b) << "\n";
  cout << "a != b = " << (a != b) << "\n";
  cout << "\n\n--------------- Logical Operators ---------------\n\n";
  cout << "a && b" << (a && b) << "\n";
  cout << "a || b" << (a || b) << "\n";
  cout << "!a = " << (!a) << "\n";
}