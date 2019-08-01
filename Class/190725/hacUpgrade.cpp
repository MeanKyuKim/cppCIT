#include <iostream>
using namespace std;





int main() {

  int round; //declaration of round variable with data type of integer

  cout << "Let's play a game!" << "\n"; //
  cout << "==================\n===============";
  cout << "type the number of rounds" << "\n";
  cin >> round;

  int answer[round]; //(declaration of (collection of round)) variables

  for (int i = 0; i != round; i++){ // this loop does something for some times.
    cout << "type the answer for round" << (i+ 1) << "\n";
    cin >> answer[i];
  }

  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nHiding Answers.....\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";


 for (int j = 0 ; j < round ; j++){

   int trial; //this variable contains data for ~~

   cout << "Do you know answer in my head?" << "\n";
   cin >> trial;

   while (trial != answer[j])
   {

     if (trial > answer[j])
     {
       cout << "Answer is less than you've thought." << "\n";
     }
     else
     {
       cout << "Answer is greater than you've thought." << "\n";
     }
     cout << "Try it again!" << "\n";
     cin >> trial;
     if (trial == answer[j])
     {
       cout << "Yeah! You got it!" << "\n";
     }

   }

cout << "starting next round. \n=============================\n";

 }


  return 0;
}
