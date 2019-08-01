#include <iostream>
using namespace std;



int main() {
  int answer = 67;
  int trial;

  cout << "Do you know answer in my head?" << "\n";
  cin >> trial;

  while (trial != answer)
  {

    if (trial > answer)
    {
      cout << "Answer is less than you've thought." << "\n";
    }
    else
    {
      cout << "Answer is greater than you've thought." << "\n";
    }
    cout << "Try it again!" << "\n";
    cin >> trial;
    if (trial == answer)
    {
      cout << "Yeah! You got it!" << "\n";
    }

  }

  return 0;
}
