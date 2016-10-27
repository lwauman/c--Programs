#include <iostream>

int main(){
  using namespace std;

  const int arrSize = 20;
  char name[arrSize];
  char dessert[arrSize];

  cout  <<  "Enter your name: ";
  cin.getline(name, arrSize);
  cout  <<  "\nEnter your favorite dessert: ";
  cin.getline(dessert, arrSize);
  cout  <<  "\nEww " << name << " " << dessert <<" is disgusting.";

  cin.get();
  return 0;
}
