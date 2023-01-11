#include <iostream>
using namespace std;
string checkCharacter(char character);
main ()
{ string Result;
  char character;
  cout << "Enter Character: ";
  cin >> character;
  Result = checkCharacter(character);
  cout << Result ;
}
string checkCharacter(char character)
{  
   string Statement;
  if(character == 'A')
 { cout << "It is Upper Case Character";
  }
  if(character == 'a')
  { cout << "It is Lower Case Character";
  }
    return Statement;
}