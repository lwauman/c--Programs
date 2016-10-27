#include <vector>
#include <iostream>

int main(){
  using namespace std;

  vector<int> vec(5);

  vec[0] = 0;
  vec[1] = 1;
  vec[2] = 2;
  vec[3] = 3;
  vec[4] = 4;
  vec[5] = 5; //auto resize

  cout << vec[0] <<
          vec[1] <<
          vec[2] <<
          vec[3] <<
          vec[4] <<
          vec[5] <<
          endl;

  return 0;
}
