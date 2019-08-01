#include <iostream>
using namespace std;



int main() {
  int fiboArray[100] = {1,1}; //(ex) fiboArray, yourName, myName (camel casing))
  int fiboNumber;
  int fiboIdx = 2;


  while(fiboNumber < 100){
    fiboNumber = fiboArray[fiboIdx - 1] + fiboArray[fiboIdx - 2] ;
    fiboArray[fiboIdx]  = fiboNumber;
    cout << fiboNumber << "\n";
    fiboIdx += 1;
  }

  return 0;
}
