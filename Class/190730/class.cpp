#include <iostream>
using namespace std;

class roomEscape
{
  public:
    string theme;
    string location;
    string title;
    int roomNumber;
    int limitedTime;
    int extraTimeCalculator(int timeGiven);
    void introdueRoomEscape(string theme, string location, string title, float limitedTime, float roomNumber);
    roomEscape(string them, string locatio);
    // {
    //   locatio = "NY";
    //   theme = them;
    //   location = locatio;
    // };
};
//propery name and parameter name should not be the same.
//compiler might get confused.


roomEscape::roomEscape(string thm, string loc){
  theme = thm;
  location = loc;
}

void roomEscape::introdueRoomEscape(string theme, string location, string title, float limitedTime, float roomNumber){
  cout << "This room escape theme is" << " " << theme << "." << "\n";
  cout << "This theme is located at" << " " << location<< "." << "\n";
  cout << "The title of the theme is" << " " << title << "." << "\n";
  cout << "This room escape gives us" << " " << limitedTime << " minutes." << "\n";
  cout << "This theme has" << " " << roomNumber << " rooms." << "\n";
}


int roomEscape::extraTimeCalculator( int timeGiven){
    cout << " extra time is " << (timeGiven * 0.1) <<" , whole time is " << (timeGiven * 1.1) << "\n";
    return 0;
}



int main() {

  roomEscape beatPhobia("asd", "asd");
  beatPhobia.theme = "thriller";
  beatPhobia.location = "Myeong-dong";
  beatPhobia.title = "Smiling Man";
  beatPhobia.roomNumber = 3;
  beatPhobia.limitedTime = 60;

  roomEscape sherlockHolmes("asdf","asd");
  sherlockHolmes.theme = "emotional";
  sherlockHolmes.location = "Jamsil";
  sherlockHolmes.title = "Deep Sleep";
  sherlockHolmes.roomNumber = 6;
  sherlockHolmes.limitedTime = 60;

  roomEscape horrorSpecial("horror", "HyeHwa");

  cout << horrorSpecial.location << "\n";

  sherlockHolmes.extraTimeCalculator(sherlockHolmes.limitedTime);
  beatPhobia.introdueRoomEscape(beatPhobia.theme, beatPhobia.location, beatPhobia.title, beatPhobia.limitedTime, beatPhobia.roomNumber);



  // cout << "This room escape theme is" << " " << beatPhobia.theme << "." << "\n";
  // cout << "This theme is located at" << " " << beatPhobia.location << "." << "\n";
  // cout << "The title of the theme is" << " " << beatPhobia.title << "." << "\n";
  // cout << "This room escape gives us" << " " << beatPhobia.limitedTime << " minutes." << "\n";
  // cout << "This theme has" << " " << beatPhobia.roomNumber << " rooms." << "\n";
  //
  //
  // cout << "This room escape theme is" << " " << sherlockHolmes.theme << "." <<  "\n";
  // cout << "This theme is located at" << " " << sherlockHolmes.location << "." << "\n";
  // cout << "The Title of the theme is" << " " << sherlockHolmes.title << "." << "\n";
  // cout << "This room escape gives us" << " " << sherlockHolmes.limitedTime << " minutes." << "\n";
  // cout << "This theme has" << " " << sherlockHolmes.roomNumber << " rooms." << "\n";


  return 0;
}
// //HW1. print like this :
// this Room Escape's theme is {}
// this Room Escape gives us {} minutes.
// go to Room No. {}
