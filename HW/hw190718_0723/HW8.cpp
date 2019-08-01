// let's make 7's multiple finder!!
// take a user Input x, and finth x th 7's multiple and print it.
// read 190723 >> fibonacciGenerator.cpp carefully.
// you will get bunch of ideas from that code.
#include <iostream>
using namespace std;


int sevenMultipleGenerator(int idx){
  int fiboArray[7] = {}; //(ex) fiboArray, yourName, myName (camel casing))
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

  cout << "Type the seven's multiple number index you want to find : ";
  cin >> numberIdx;
  cout << "Tada! your " << numberIdx <<" th seven's multipe number is " << fibonacciGenerator(numberIdx) << endl;;

  return 0;
}
