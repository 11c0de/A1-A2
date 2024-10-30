// 7. Find the GCD of two numbers.
#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    while (n1 != n2)
    {
        if (n1 > n2)
        {
            n1 = n1 - n2;
        }
        else
        {
            n2 = n2 - n1;
        }
    }
    cout << "GCD = " << n1;
    
    return 0;
}

// output:
// Enter two numbers: 60 24
// GCD = 12

// Enter two numbers: 12 12
// GCD = 12