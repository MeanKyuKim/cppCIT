#include <iostream>
using namespace std;

int main() {
  string name;
  int born;
  double height;


  cout << "Hello, what is your name?" << endl;
  cin >> name;
  cout << "Hello " << name << " ," << "when were you born?" << endl;
  cin >> born;
  cout << "You'll be " << 2030 - born << " in 2030." << endl;
  cout << "How tall are you in meters?" << endl;
  cin >> height;
  cout << name<< ", you are " << height << "meters tall" << endl;
  return 0;
}
