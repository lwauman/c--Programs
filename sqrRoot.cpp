#include <iostream>
#include <cmath>

int main(){
  using namespace std;

  double num;
  cout << "Enter a number you wish to find the square";
  cout << " root of." << endl;
  cin >> num;
  cout << "The square root of " << num << " is " << sqrt(num);

  cin.get();
  return 0;
}
