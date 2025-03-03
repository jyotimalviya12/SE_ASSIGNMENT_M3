// 6. Introduction to OOP- prog 1- calculator using OOP
#include <iostream>
using namespace std;

class calculator
{
  float a, b;

public:
  void get_nums()
  {
    cout << "\n the first number : - ";
    cin >> a;
    cout << "\n the second number : - ";
    cin >> b;
  }
  int add(int x, int y)
  {
    return x + y;
  }
  int sub(int x, int y)
  {
    return x - y;
  }
  int multiply(int x, int y)
  {
    return x * y;
  }
  float divide(float x, float y)
  {
    return x / y;
  }
};

main()
{
  calculator c;
  c.get_nums();
}