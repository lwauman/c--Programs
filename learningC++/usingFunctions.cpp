#include <iostream>
int doubleNumber(int);

int main(){
  using namespace std;

  cout << "Enter a number you would like to double.";
  int num;
  cin >> num;
  cout << doubleNumber(num);

  cin.get();
  return 0;
}

int doubleNumber(int num){
  using namespace std;
  return num * 2;
}
