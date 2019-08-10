#include <iostream>
using namespace std;

struct burger {
  string name;
  int price;
  int stars;
};

void printInformation(burger McDonald)
{
  cout << "I bought " << McDonald.name << " burger." << "\n";
  cout << "It was " << McDonald.price << " won." << "\n";
  cout << "I wanna rate it with " << McDonald.stars << " stars." << "\n";
}

int main() {
  burger doubleBulgogi;
  doubleBulgogi.name = "double bulgogi";
  doubleBulgogi.price = 7000;
  doubleBulgogi.stars = 5;

  burger chicken;
  chicken.name = "Sanghai Spicy Chicken";
  chicken.price = 5000;
  chicken.stars = 4;

  printInformation(doubleBulgogi);
  printInformation(chicken);

  return 0;
}
