#include <iostream>

struct inflatable
{
  char name[20];
  float volume;
  double price;
};

int main(){
  using namespace std;

  inflatable products[2]
  {
      {"Godzilla", 10.00, 29.99},
      {"Grim Reaper", 15.25, 29.99}
  };

  cout << "Names: " << products[0].name << ", " << products[1].name << endl;
  cout << "Volumes: " << products[0].volume << ", " << products[1].volume << endl;
  cout << "Prices: " << products[0].price << ", " << products[1].price << endl;

  cin.get();
  return 0;
}
