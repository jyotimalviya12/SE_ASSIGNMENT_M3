// 4. Function and Scope- prog 3- Variable scope
#include <iostream>
using namespace std;

int x = 50; // Global variable

main()
{
  int y = 10; // local variable
  cout << "\nValue of Global Variable outside main : " << x;
  x = 100;
  cout << "\nValue of Global Variable inside main : " << x;
  cout << "\nValue of Local Variable : " << y;
}