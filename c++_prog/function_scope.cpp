// 4. Function and scope- prog 1 - simlpe calculator using functions
#include <iostream>
using namespace std;
int add(int, int);
int substract(int, int);
int multiply(int, int);
float divide(float, float);
main()
{
  float x, y;
  int c;
  cout << "--------------- Calculator ---------------\n\n";
  cout << "Select operation : -\n";
  cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
  cin >> c;
  cout << "\nEnter the first number : ";
  cin >> x;
  cout << "\nEnter the second number : ";
  cin >> y;
  if (c == 1)
  {
    cout << x << " + " << y << " =" << add(x, y);
  }
  else if (c == 2)
  {
    cout << x << " - " << y << " =" << substract(x, y);
  }
  else if (c == 3)
  {
    cout << x << " X " << y << " =" << multiply(x, y);
  }
  else if (c == 4)
  {
    cout << x << " / " << y << " =" << divide(x, y);
  }
  else
  {
    cout << "\nInvalid Operation";
  }
}

int add(int a, int b)
{
  return a + b;
}

int substract(int a, int b)
{
  return a - b;
}

int multiply(int a, int b)
{
  return a * b;
}

float divide(float a, float b)
{
  return (a / b);
}