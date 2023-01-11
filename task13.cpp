#include <iostream>
using namespace std;
string evenish_oddish (int number);
main()
{
  int number1;
  int sum;
  string result;
  cout << "Enter Number: ";
  cin >> number1;
  result = evenish_oddish (number1);
cout << result;
}
string evenish_oddish (int number)
{  string statement;
   
int a1= number % 10;
int a2= number/ 10;
int a3 = a2 % 10;
int a4= a2 / 10;
int a5= a4 % 10;
int a6 = a4 / 10;
int a7 = a6 % 10;
int a8 = a6/10;
int sum = a1 + a3 + a5 + a7 + a8;
	
   if(sum % 2 == 0)
   { 
     statement = "Evenish";
   }

  if (sum % 2 != 0)
   { 
     statement = "Oddish";
   } 
return statement;

}
