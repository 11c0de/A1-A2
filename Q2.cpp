// 2. Write down a Program to check if a given year is a Leap Year or not.
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a Year:";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }
    return 0;
}