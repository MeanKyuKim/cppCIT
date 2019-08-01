#include  <iostream>
using namespace std;

int main()
{
  int start;
  int end;

  cout << "type a number you wanna start with : \n";
  cin >> start; //(put data in start variable)
  cout << "type a number you wanna end with : \n";
  cin >> end;


  cout << "================================\n";


  int i = start;

  while(i <= end)
  {
    if(i % 2 == 0)
    {
      cout << i << endl;
    }
    i++;
  }

  return 0;
}
