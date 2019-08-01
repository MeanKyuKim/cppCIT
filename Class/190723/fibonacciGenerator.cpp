#include <iostream>
using namespace std;


int fibonacciGenerator(int idx){
  int fiboArray[100] = {1,1}; //(ex) fiboArray, yourName, myName (camel casing))
  int fiboNumber = 0;
  int fiboIdx = 2;


  while(fiboNumber < 1000000){
    fiboNumber = fiboArray[fiboIdx - 1] + fiboArray[fiboIdx - 2] ;
    fiboArray[fiboIdx]  = fiboNumber;
    // cout << fiboNumber << "n";
    fiboIdx += 1;
  }

  return fiboArray[idx];
}


int main() {

  int numberIdx ;

  cout << "Type the fibo number index you want to find : ";
  cin >> numberIdx;
  cout << "Tada! your " << numberIdx <<" th fibonacci number is " << fibonacciGenerator(numberIdx) << endl;;

  return 0;
}
