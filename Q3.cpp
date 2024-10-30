// 3. Write down a program to perform the Arithmetic Operations using Switch Case .
#include <iostream>
using namespace std;
int main()
{
    char op;
    float num1, num2;
    cout << "Enter operator(+,-,*,/):";
    cin >> op;
    cout << "Enter two operands: ";
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
        cout << "Error! Operator is not correct." << endl;
        break;
    }
    
    return 0;
}

// output:
// Enter operator(+,-,*,/):y
// Enter two operands: 12 12
// Error! Operator is not correct.

// Enter operator(+,-,*,/):+
// Enter two operands: 12 12
// 12+12=24

// Enter operator(+,-,*,/):-
// Enter two operands: 24 12
// 24-12=12

// Enter operator(+,-,*,/):*
// Enter two operands: 12 12
// 12*12=144

// Enter operator(+,-,*,/):/
// Enter two operands: 12 0
// Error! Division by zero.

// Enter operator(+,-,*,/):/ 
// Enter two operands: 24 6
// 24/6=4