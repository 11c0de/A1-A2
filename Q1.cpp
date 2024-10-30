// 1. Write down a Program For Finding the Roots of Quadratic Equations.
// Formula - (-b+-√b^2-4ac) / 2a

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, discriminant, root1, root2;
    cout << "Enter coefficients a,b and c:";
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;
    if(discriminant==0){ // a=2,b=4,c=2
        root1=(-b/(2*a));
        cout<<"Roots are real and equal"<<endl;
        cout<<"Root1=Root2="<<root1<<endl;
    }
    else if(discriminant > 0){ // a=4,b=8,c=2
    root1=(-b+sqrt(discriminant)/(2*a));
    root2=(-b-sqrt(discriminant)/(2*a));
    cout<<"Roots are real and unequal"<<endl; 
    cout<<"Root1="<<root1<<endl<<"Root2="<<root2<<endl;
    }
    else{ //a=2,b=4,c=8
        cout<<"Imaginary"<<endl;
    }
    return 0;
}
