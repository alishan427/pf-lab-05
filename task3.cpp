#include <iostream>
using namespace std;
int isGreater(int number1 , int number2);

main()
{
  int number1;
  int number2;
  
  cout << "enter number";
  cin >> number1;
  cout << "enter number";
  cin >> number2;
  isGreater(number1 , number2);
 
}
int isGreater(int number1 , int number2)
{     
     if(number1 > number2)
{  cout << number1 << " is greater than " << number2;
}
  if(number1 < number2)
{  cout << number2 << " is greater than "  << number1;
     
}
}
