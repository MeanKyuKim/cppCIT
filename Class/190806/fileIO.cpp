#include <iostream>
#include <fstream>
using namespace std;

void getdata(istream& is, string m){
  is >> m;

  cout << m << "\n";

}

int main(int argc, char* argv[]){
  string m;
  if(argc == 1){
    cerr << "Usage : " << argv[0] <<  " maze data file \n";
  }
  else {
    ifstream is(argv[1]);
    if(!is){
      cerr << argv[1] << "doesnot exist\n" ;
      return 1;
     }
     cout << "Datafile : " << argv[1] << "\n";
     getdata(is, m);
     is.close();
  }
}
