#include <iostream>
// #include <string>
using namespace std;

int main() {
  // int toFive[6] = {1, 2, 3};
  // string president[7] = { "trump", "obama", "bush", "clinton"};
  // cout << toFive[1] << endl;
  // cout << toFive[4] << endl;
  // cout << president[3] << endl;
  // cout << president[5] << endl;


  // int coordinate[3][2] = {{1,2}, {3,1}, {4,2}};
  // cout << coordinate[2][1]<<endl;
  // cout << coordinate[1][0]<<endl;

  int coordinate[3][3][4] = {{{2,1,2,4},2,3}, {4,5,8}, {6,7,9}};
  cout << coordinate[0][0][3] << endl;
  cout << coordinate[2][1][0] << endl;

  return 0;
}
