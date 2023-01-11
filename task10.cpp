#include <iostream>
using namespace std;
int multiplication(int number);
main()
{
  int number;
  int product;
  int answer;
  cout << "Enter Number";
  cin >> number;
  answer = multiplication(number);
  cout << "Answer is: " << product;
}
int multiplication(int number)
{
  int result;
  result = number * 5;
  return result;
}
