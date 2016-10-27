#include <iostream>
#include <cstring>  //needed for strlen()

int main(){
  using namespace std;

  const int Size = 15;
  char name1[Size];
  char name2[Size] = "C++owboy";

  cout  <<  "My name is " << name2 << endl;
  cout  <<  "What's your name?\n";
  cin   >>  name1;
  cout  <<  "Your name is " << name1 <<" and it has "
        <<  strlen(name1) << " characters and is stored\n"
        <<  "in an array of " << sizeof(name1) << " bytes.\n";
  cout  <<  "Your inital is " << name1[0] << endl;

  cin.get();
  return 0;
}
