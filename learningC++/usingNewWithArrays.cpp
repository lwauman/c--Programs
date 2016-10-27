#include <iostream>

int main(){
  using namespace std;

  double * doublePointer = new double[3];
  doublePointer[0] = .1;
  doublePointer[1] = .2;
  doublePointer[2] = .3;

  cout << doublePointer[0] << " " << doublePointer[1] << " " <<
        doublePointer[2] << endl;

  delete [] doublePointer;
  return 0;
}
