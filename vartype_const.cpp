#include <iostream>
using namespace std;
const float Pi = 3.1415; // use for assign real value of Pi
int main(){
  float radius , area;
  cout << "radius = " ;
  cin >> radius;

  area = Pi * radius * radius;
  cout << "area = " << area;
    return 0;
}