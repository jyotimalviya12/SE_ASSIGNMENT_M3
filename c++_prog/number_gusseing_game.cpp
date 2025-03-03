// 3. Control flow statements- prog 3- Number guessing game
#include <iostream>
using namespace std;

main()
{
  int x = rand();
  int guess, max_tries = 3;
  cout << "\nYou have guess a number between 1 to 100";
  while (max_tries != 0)
  {
    cout << "\nTries left = " << max_tries;
    cout << "\nGuess the number : ";
    cin >> guess;
    if (guess == x)
    {
      cout << "\nYou Guessed right !!";
      break;
    }
    else
    {
      if (guess < x - 10)
      {
        cout << "\nGuess was too low";
      }
      else if (guess > x + 10)
      {
        cout << "\nGuess was too high";
      }
      else
      {
        cout << "\nWrong Guess but it was close";
      }
    }
    max_tries -= 1;
  }
  if (max_tries == 0)
  {
    cout << "\nYou lose, you weren't able to guess the number";
  }
}