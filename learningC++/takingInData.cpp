#include <iostream>

int main(){
  using namespace std;

  int carrots;

  carrots = 25;
  cout << "I have " << carrots << " carrots." << endl;
  carrots = carrots - 1;
  cout << "Now I have " << carrots << " carrots." << endl;

  cout << "How many carrots do you have?" << endl;
  cin >> carrots;
  cout << "I will add two to that.";
  carrots += 2;
  cout << "You now have " << carrots << " carrots." << endl;

  cin.get();
  return 0;
}
