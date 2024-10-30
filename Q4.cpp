// 4. Write down a program to Find the Factorial of a Number.
#include <iostream>
using namespace std;
int main()
{
    int n, OriginalNum;
    int fact = 1;
    cout << "Enter a positive integer:";
    cin >> n;
    OriginalNum = n;
    if (n < 0)
    {
        cout << "Error! Factorial of a negative number doesn't exist." << endl;
    }
    else
    {
        while (n >= 1)
        {
            fact = fact * n;
            n--;
        }
        cout << "Factorial of " << OriginalNum << " = " << fact << endl;
    }
    return 0;
}

// output:
// Enter a positive integer:-19
// Error! Factorial of a negative number doesn't exist.

// Enter a positive integer:5
// Factorial of 5 = 120