#include <iostream>
using namespace std;
main()
{
  int volume;
  int p1;
  int p2;
  int volume_of_pool_1hour;
  float hours;
  int condition;
  float percentage_of_pool;
  float percentage_of_p1;
  float percentage_of_p2;
  int over_flow_water;
  cout << "Enter volume: ";
  cin >> volume;
  cout << "pipe 1 flow rate: ";
  cin >> p1;
  cout << "pipe 2 flow rate: ";
  cin >> p2;
  cout << "Enter Hours: ";
  cin >> hours;
  volume_of_pool_1hour = p1 + p2;
  condition = hours * volume_of_pool_1hour;
  cout << "In " << hours << " hours volume of pool will be: " << condition << " litre" << endl;
  percentage_of_pool = (condition * 100) / volume;
  cout << percentage_of_pool << " % pool will filled in " << hours << " hours" << endl;
  percentage_of_p1 = (p1 * hours * 100) / condition;
  percentage_of_p2 = (p2 * hours * 100) / condition;
  cout << "P1 contribute " << percentage_of_p1 << "%" << endl;
  cout << "P2 contribute " << percentage_of_p2 << "%" << endl;
  over_flow_water = condition - volume;
  if (condition > volume)
  {
    cout << over_flow_water << " litre water will over flow ";
  }
}
