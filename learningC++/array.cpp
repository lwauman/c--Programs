#include <iostream>

int main(){
  using namespace std;

  int array[3];
  array[0] = 1;
  array[1] = 2;
  array[2] = 3;

  int array2[3] = {4, 5, 6};

  cout << "The first array contains " << array[0] << " "<< array[1]
       << " "<< array[2] << endl;
  cout << "The second array contains "<< array2[0] << array2[1] << array2[2] << endl;

  cin.get();
  return 0;
}
