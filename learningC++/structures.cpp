#include <iostream>

struct inflatable
{
  char name[20];
  float volume;
  double price;
};

int main(){
  using namespace std;

  inflatable product1 =
  {
    "Dancing Man",
    2.00,
    29.99
  };

  cout << product1.name <<"\n"<< product1.volume <<"\n"<< product1.price;

  return 0;
}
