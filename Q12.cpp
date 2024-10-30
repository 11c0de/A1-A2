// 12. Write down a program to make a Calculator Function which can perform addition, subtraction,
// multiplication, division, and square root of a number.
#include <iostream>
#include <cmath>
using namespace std;
void calculator()
{
    char op;
    float num1, num2;
    cout << "Enter operator(+,-,*,/,s for square root):";
    cin >> op;
    if (op == 's')
    {
        cout << "Enter a number:";
        cin >> num1;
        cout << "Square root of " << num1 << " is " << sqrt(num1) << endl;
    }
    else
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (op)
        {
        case '+':
            cout << num1 << "+" << num2 << "=" << (num1 + num2) << endl;
            break;
        case '-':
            cout << num1 << "-" << num2 << "=" << (num1 - num2) << endl;
            break;
        case '*':
            cout << num1 << "*" << num2 << "=" << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 != 0)
            {
                cout << num1 << "/" << num2 << "=" << (num1 / num2) << endl;
            }
            else
            {
                cout << "Error! Division by zero." << endl;
            }
            break;
        default:
            cout << "Error! Invalid operation!" << endl;
            break;
        }
    }
}
int main()
{
    calculator();
    return 0;
}


// output:
// Enter operator(+,-,*,/,s for square root):x
// Enter two numbers: 12 13
// Error! Invalid operation!

// Enter operator(+,-,*,/,s for square root):s
// Enter a number:64
// Square root of 64 is 8

// Enter operator(+,-,*,/,s for square root):+
// Enter two numbers: 12 12
// 12+12=24

// Enter operator(+,-,*,/,s for square root):-
// Enter two numbers: 24 12
// 24-12=12

// Enter operator(+,-,*,/,s for square root):*
// Enter two numbers: 12 12
// 12*12=144

// Enter operator(+,-,*,/,s for square root):/
// Enter two numbers: 12 0
// Error! Division by zero.

// Enter operator(+,-,*,/,s for square root):/
// Enter two numbers: 12 6
// 12/6=2