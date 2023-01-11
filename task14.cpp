#include <iostream>
using namespace std;
main()
{ 
  int hours;
  int minutes;
  int multiply;
  int sum;
 
  cout << "Enter Hours: ";
  cin >> hours;
  cout << "Enter Minutes: ";
  cin >> minutes;
  multiply = hours * 60;
  sum = multiply + minutes + 15;
  int  sum1 = sum/60;
  int  sum2 = sum1 * 60;
  int  sum3 = sum - sum2;
  cout << "time After 15 minutes will be: " <<endl << sum1 << endl << sum3 ;

}