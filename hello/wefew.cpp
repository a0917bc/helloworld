#include <iostream> 
using namespace  std;

int main( )   
{
    // const double  RATE = 6.9;
    // double deposit;
    // cout << "Enter the amount of your deposit $"; 
    // cin >> deposit; 
    // double newBalance;
    // newBalance = deposit + deposit*(RATE/100); 
    // cout << "In one year, that deposit will grow to\n"  << "$" << newBalance << " an amount worth waiting for.\n";
    // return 0;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    float price = 78.5;
    cout << "The price is $" << price << endl;
    // int n = 2;
    // int valueProduced = 2 * (n++);
    // cout << valueProduced << "\n";
    // cout << n << "\n";
    // cout << ((n + 2) * (++n)) + 5;
}