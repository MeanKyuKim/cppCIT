#include <iostream>
using namespace std;

int fiboArray[100] = {1, 1};
int i;

int fiboGen(int index)
{
  int fiboNumber;

  for(int i = 2; i < index; i++)
  {
    fiboNumber = fiboArray[i - 1] + fiboArray[i - 2];
    fiboArray[i]  = fiboNumber;
  }
  return fiboArray[index-1];
}


int main() {

  cout << fiboGen(11) << "\n";
  return 0;
}
