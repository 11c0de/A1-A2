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

// output:
// Enter a Year:2000
// 2000 is a leap year.

// Enter a Year:1700
// 1700 is not a leap year.

// Enter a Year:1968
// 1968 is a leap year.