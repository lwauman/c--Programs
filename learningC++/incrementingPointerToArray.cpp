#include <iostream>

int main(){
  using namespace std;

  int arr[3] = {0,1,2};
  int *pt = arr;

  cout << *pt;

  *pt++;

  cout << *pt;

  return 0;
}
