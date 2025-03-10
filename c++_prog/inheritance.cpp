
// 6.Introduction to object-oriented programming- prog 3- Inheritance Example
#include <iostream>
using namespace std;

class Person
{
protected:
  string name;
  int age;
  void get_person()
  {
    cout << "\nEnter your name : ";
    cin >> name;
    cout << "\nEnter your age : ";
    cin >> age;
  }
};

class Teacher : private Person
{
  string subject;

public:
  void get_teacher()
  {
    get_person();
    cout << "\nEnter the subject you teach : ";
    cin >> subject;
  }
  void print_teacher()
  {
    cout << "\nName : " << name;
    cout << "\nAge : " << age;
    cout << "\nSubject : " << subject;
  }
};

class Student : private Person
{
  int marks;

public:
  void get_student()
  {
    get_person();
    cout << "\nEnter your marks : ";
    cin >> marks;
  }
  void print_student()
  {
    cout << "\nName : " << name;
    cout << "\nAge : " << age;
    cout << "\nMarks : " << marks;
  }
};

main()
{
  Teacher t;
  Student s;
  t.get_teacher();
  s.get_student();
  cout << "\n\t\t\t Teacher's details";
  t.print_teacher();
  cout << "\n\t\t\t Students's details";
  s.print_student();
}
