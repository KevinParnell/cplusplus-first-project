// This program calculates the user's pay.
#include <iostream>
using namespace std;

int main ()
{
  double hours, rate, pay;
  // Get the number of hours worked.
  cout << "how many hours did you work? ";
  cin >> hours;

  // Get the hourly pay rate.
  cout << "how much do you get paid per hour? ";
  cin >> rate;

  // Calculate the pay.
  pay = hours * rate;

  // Display the pay.
  cout << "you have earned $" << pay << endl;
  return 0;
}
