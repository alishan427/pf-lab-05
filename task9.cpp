#include<iostream>
#include<cmath>
using namespace std;
float quadPos(float a, float b, float c);
main ()
{ 
  int a;
  int b;
  int c;

  cout << "Enter a: ";
  cin >> a ;
  cout << "Enter b: ";
  cin >> b ;
  cout << "Enter c: ";
  cin >> c;
  float Result;
  
  Result = quadPos(a, b, c);
  cout << "x = " << Result << endl;
}



float quadPos(float a, float b, float c)
{
	float _b =  (b * -1) ;
  float b2 = pow (b,2);
  float ac4 = 4*a*c;
  float subtraction = b2 - ac4;
  float a2 = 2*a;
  float square_root = sqrt (subtraction);
   return (_b + square_root)/a2;
}

