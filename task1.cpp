#include <iostream>
using namespace std;
int add (int num1, int num2);

int main()
{  
  int num1,num2,result;
  cout << "enter num1: ";
  cin >> num1;
  cout << "enter num2: ";
  cin >> num2; 
  result = add (num1, num2); 
  cout << "result is: "<< result;
}
int add (int num1, int num2)
{ int sum;
  sum = num1 + num2;
  return sum;
}
