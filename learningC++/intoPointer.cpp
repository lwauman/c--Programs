#include <iostream>

int main(){
  using namespace std;

  int var = 25;
  int * p_var; //pointer to an int

  p_var = &var; //pointer is pointing to the address of var

  cout << "Values: (var)" << var << ", (p_var) " << *p_var << endl;
  cout << "Addresses: (var)" << &var << ", (p_var) " << p_var << endl;

  cout << "Changing var variable through p_var" << endl;

  *p_var = *p_var + 1;

  cout << "Values: (var)" << var << ", (p_var) " << *p_var << endl;

  cin.get();
  return 0;
}
