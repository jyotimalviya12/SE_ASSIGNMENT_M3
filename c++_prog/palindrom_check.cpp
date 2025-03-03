// 5. Arrays and strings- prog 3 - string palindrome check
#include <iostream>
using namespace std;

main()
{
  string s, r_s;
  cout << "\nEnter a string to check : ";
  cin >> s;

  int len = s.length() - 1;
  for (int i = 0; i <= len; i++)

  {
    r_s += s[len - i];
  }
  if (s == r_s)
  {
    cout << "\nThe string is a palindrome";
  }
  else
  {
    cout << "\nThe string is not a palindrome";
  }
}