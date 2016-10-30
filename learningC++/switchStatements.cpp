#include <iostream>

int main(){

  int num = 5;

  switch(num){
    case 1:
          std::cout << "num == 1" << std::endl;
          break;
    case 3:
          std::cout << "num == 3" << std::endl;
          break;
    default:
          std::cout << "num != 1 && num != 3" << std::endl;
  }

  return 0;
}
