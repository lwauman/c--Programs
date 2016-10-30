#include <iostream>

int addUntilZero(int toAdd){
  if(toAdd == 0)
    return 0;
  else
    return addUntilZero(toAdd-1) + toAdd;
}

int main(){
  using namespace std;

  std::cout << addUntilZero(5) << std::endl;

  return 0;
}
