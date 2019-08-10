#include <iostream>
#include "recta.h"
using namespace std;

Rectangle::Rectangle(int x, int y , int h , int w ){
  xLow = x;
  yLow = y;
  height = h;
  width = w;
}


void Rectangle::Print()
{
  cout << "Position : " << xLow << " " << yLow << "; Height = " << height << " Width = " << width << "\n";

}

bool Rectangle::SmallerThan(Rectangle& s) {
  if (height * width < s.height * s.width)
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool Rectangle::EqualTo(Rectangle& s) {

    if (height * width == s.height * s.width){
      return true;
    }
    else{return false;}

}

int Rectangle::GetHeight() {
  return height;
}

int Rectangle::GetWidth()
{return width ;
}
