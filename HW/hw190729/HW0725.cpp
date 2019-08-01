#include <iostream>
using namespace std;

int fiboArray[100] = {1, 1}; //fiboarray that has an index size of 100 is declared with data type of integer & fiboArray[0] = 1 & fiboArray[1] = 1
// int i; //i variable is declared with data type of integer >>> UNNECESSARY

int fiboGen(int index)//It is known that 11 is assigned at index parameter.
{
  int fiboNumber; //fiboNumber variable is declared with data type integer

  for(int i = 2; i < index; i++) //2 is assigned at the variable i
  {
    fiboNumber = fiboArray[i - 1] + fiboArray[i - 2]; //Equation for fiboNumber is addition of origin and next array to make upcoming array.
    fiboArray[i]  = fiboNumber;
  }
  return fiboArray[index -1]; //return fiboArray[10]

}


int main() { //Compiler initially operates main function.
  cout << fiboGen(13) << "\n"; //Print out something that is written in function fiboGen.
  return 0;
}


// HW1. make comment for each necessarily lines,
// so that you can explain this code's strucure to teacher.
// Hw2. Modify code to get input on the terminal,
// so that you can get input index fibonacci number.
