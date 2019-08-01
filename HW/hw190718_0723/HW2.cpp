#include  <iostream>
using namespace std;

int main()
{
  int start; //(variable for integer(starting number))
  int end; //(variable for integer(ending number))

  cout << "type a number you wanna start with : \n";
  cin >> start; //(put data in start variable)
  cout << "type a number you wanna end with : \n";
  cin >> end; //(put data in end variable)

  cout << "================================\n";
  // if (start % 2 == 0)
  // {
  //   cout << "Don't do that!" << endl;
  // }
  // else {
  //
  //
  //
  // }
    for (int i = start; i <= end; i = i + 1)
    {
      if(i % 2 == 0) { //(condition: i variable which remaider is 0 when divided by 2)
      cout << i << endl;
    }
    }

  return 0;
}
