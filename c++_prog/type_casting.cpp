// 2. Variables, data types and Operators- prog 2- Type conversion
#include <iostream>
using namespace std;

main()
{
  float x = 10.122;
  int y = x;
  cout << "\nX implicitly converted to integer : " << y;
  float a = 12.122;
  int b;
  b = (int)a;
  cout << "\nA explicitly converted to integer : " << b;
}