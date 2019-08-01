#include  <iostream>
using namespace std;

int main()
{
  int i = 0;
  while(i < 100)
  {
    cout << i << " ";

    if (i % 3 == 2)
    {
      cout << "\n";
    }
    i++;
  }

  return 0;
}
