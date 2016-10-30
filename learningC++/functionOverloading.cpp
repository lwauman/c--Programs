#include <iostream>

int doubleNum(int x){return x*x;}
double doubleNum(double x){return x*x;}

int main(){
  std::cout << doubleNum(5) << std::endl;
  std::cout << doubleNum(5.5) << std::endl;

  return 0;
}
