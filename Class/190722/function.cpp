#include <iostream>
using namespace std;


void robotTalking(string something){
    cout <<" beeP beep. It is " << something << endl;
}

int main() {
  string name;
  int born;
  double height;


  cout << "Hello, what is your name?" << endl;
  cin >> name;
  robotTalking(name);
  return 0;
}
