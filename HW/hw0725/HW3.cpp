#include <iostream>
using namespace std;



int main() {

    int index;

    cout << "Type your favorite index number!" << "\n";
    cin >> index;


    int fiboNumber;
    int fiboArray[100] = {1, 1};

  for(int i = 2; i < index; i++)
  {
    fiboNumber = fiboArray[i - 1] + fiboArray[i - 2];
      fiboArray[i]  = fiboNumber;
    cout << fiboNumber << " ";
  }
  return 0;
}

// // HW3. Using only For loop, print all fibonacci numbers below 1000.
//     you can use Arrays.
//     1 1 2 3 5 8 13 21 34 55 89 ...
// you can get crucial ideas from hw6.cpp
