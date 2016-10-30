#include <iostream>

template <class AnyType>
void swap(AnyType &a, AnyType &b){
  AnyType temp;
  temp = a;
  a = b;
  b = temp;
}

int main(){
  int x = 1;
  int y = 2;
  
  std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
  swap(x,y);
  std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

  return 0;
}
