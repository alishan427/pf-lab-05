#include<iostream>
#include<cmath>
using namespace std;

main ()
{ int base;
  float height;
  float angle;
  cout << "Enter Base: ";
  cin >> base;
  cout << "Enter Angle: ";
  cin >> angle;
  angle = tan (30);
  height = base * angle;
  cout << "Height is: " << height << endl;
}