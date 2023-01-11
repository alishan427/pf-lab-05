#include<iostream>
#include<cmath>
using namespace std;

main ()
{ 
  int number;
  float result;
  float result1;
  cout << "Enter Number";
  cin >> number;
  result = sin(number/57.29);
  result1 = tan (number/57.29);
  cout << "sin of number is: " << result << endl ;
  cout << "tan of number is: " << result1;

}
