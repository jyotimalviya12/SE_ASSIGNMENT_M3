
// 5. Arrays and strings- prog 1 - sum and average of an array
#include <iostream>
using namespace std;
main()
{
  int len;
  cout << "\nEnter the length of the array : ";
  cin >> len;

  int arr[len], total = 0;
  for (int i = 0; i < len; i++)
  {
    cout << "\nEnter element [" << i << "] : ";
    cin >> arr[i];
    total += arr[i];
  }
  cout << "\nSum of the element's of array is : " << total;
  cout << "\nAverage of the element's of array is : " << (total / len);
}
