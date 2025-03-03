// 1. Introduction to C++ - prog 3 - Area of rectangle using OOP language
#include <iostream>
using namespace std;
class rectangle
{
  // class members
  int l, b;

public:
  // member functions
  void get_dimensions()
  {
    cout << "\nEnter the length of rectangle : ";
    cin >> l;
    cout << "\nEnter the breath of rectangle : ";
    cin >> b;
  }
  void area()

  {
    cout << "\nArea of the rectangle is " << l * b;
  }
};

main()
{
  rectangle r;
  r.get_dimensions();
  r.area();
}