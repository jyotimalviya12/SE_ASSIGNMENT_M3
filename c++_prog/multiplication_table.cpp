// 3. Control flow statements- prog 3- Multiplication table
#include <iostream>
using namespace std;

main()
{
  int a;
  cout << "\nEnter a number to get its multiplication table : ";
  cin >> a;
  for (int i = 1; i <= 10; i++)
  {
    cout << a << " * " << i << " = " << a * i << "\n";
  }
}