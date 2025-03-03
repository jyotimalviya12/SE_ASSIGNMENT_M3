// 3. Control flow statements- prog 4- Nested control structures
#include <iostream>
using namespace std;

main()
{
  int x;
  cout << "\nEnter the height of the triangle : ";
  cin >> x;
  for (int i = 0; i <= x; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << "*";
    }
    cout << "\n";
  }
}