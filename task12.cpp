#include <iostream>
using namespace std;

main()
{
  int number;
  string statement;
  string statement1;
  cout << "Enter Number";
  cin >> number;

  int a1 = number % 10;
  int a2 = number / 10;
  int a3 = a2 % 10;
  int a4 = a2 / 10;
  int a5 = a4 % 10;
  int a6 = a4 / 10;
  int a7 = a6 % 10;
  int a8 = a6 / 10;

   if (a1 == a8)
   { statement = "This number is symmetrical"; 
    }
 
  if (a3 == a7)
  { statement = "This number is symmetrical ";
  }
    
   cout <<  statement;   
  
    if (a1 != a8)
   { statement1 = "This number is not symmetrical"; 
    }
 
  if (a3 != a7)
  { statement1 = "This number is not symmetrical ";
  }
    
   cout <<  statement1;

}

