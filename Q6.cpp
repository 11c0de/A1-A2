// 6. Write a program to check if a number is a Palindrome Number or not.
#include <iostream>
using namespace std;
int main()
{
    int num, OriginalNum, remainder, reversedNum = 0;
    cout << "Enter a number:";
    cin >> num;
    OriginalNum = num;
    while (num > 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (reversedNum == OriginalNum)
    {
        cout << OriginalNum << " is a Palindrome number.";
    }
    else
    {
        cout << OriginalNum << " is not a Palindrome number.";
    }
    return 0;
}