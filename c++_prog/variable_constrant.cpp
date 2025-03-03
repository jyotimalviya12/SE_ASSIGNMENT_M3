// 2.Variables, Data types and Operators- prog 1- Variables and constants
#include <iostream>
using namespace std;

main()
{
  int r;                 // this is a variable and it can be assigned a new value later in the program
  const float pi = 3.14; // this is a constant and wont change throughout the program
  cout << "\nEnter the radius of the circle : ";
  cin >> r;
  cout << "\nPerimeter of the circle is : " << (2 * r * pi);
  cout << "\nArea of the circle is : " << (pi * r * r);
}