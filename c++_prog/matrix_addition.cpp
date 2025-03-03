// 5.Arrays and strings- prog 2 - matrix addition
#include <iostream>
using namespace std;
main()
{
  int arr1[2][2], arr2[2][2];

  cout << "\n--------------- Arr1 ---------------";
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cout << "\nEnter element [" << i << "][" << j << "] : ";
      cin >> arr1[i][j];
    }
  }

  cout << "\n--------------- Arr2 ---------------";
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cout << "\nEnter element [" << i << "][" << j << "] : ";
      cin >> arr2[i][j];
    }
  }

  cout << "\n--------------- Sum of Arr ---------------\n";
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cout << " " << arr1[i][j] + arr2[i][j];
    }
    cout << "\n";
  }
}