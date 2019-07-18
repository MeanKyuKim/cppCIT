#include <iostream>
// #include <string>
using namespace std;

int main() {
  cout << 2 + 2 * 2 << endl;
  cout << (2 + 2) * 2 << endl;
  cout << ( (5 > 3) && (7 > 9) ) << endl;
  cout << ( (5 > 3) || (7 > 9) ) << endl;
  cout << ( (5 > 3) && !(7 > 9) ) << endl;


  // cout << "Hello, " + "Dolly" << endl; => error
  // String Concatenation is only available
  // when value is stored in a string instance
  return 0;
}
