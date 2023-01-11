#include <iostream>
#include <cmath>
using namespace std;
main()
{
float num1;
float num2;
float result;
cout << "Enter Number";
cin >> num1;
cout << "Enter Number";
cin >> num2;  

result = max(num1 , num2);
cout << "maximum: " << result << endl;

result = min(num1 , num2);
cout << "minimum: " << result << endl;
}
