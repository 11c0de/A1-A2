// 5. Write a program to check if a number is a Armstrong Number or not.
#include <iostream>
using namespace std;
int main()
{
    int num, OriginalNum, remainder, sum = 0;
    cout << "Enter a number:";
    cin >> num;
    OriginalNum = num;
    while (num > 0)
    {
        remainder = num % 10;
        sum += remainder * remainder * remainder;
        num = num / 10;
    }

    if (sum == OriginalNum)
    {
        cout << OriginalNum << " is an Armstrong number.";
    }
    else
    {
        cout << OriginalNum << " is not an Armstrong number.";
    }
    return 0;
}