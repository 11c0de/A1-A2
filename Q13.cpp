// 13. Write down a program to Find the Reverse of the String “Cyclone”.

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str = "Cyclone";
    reverse(str.begin(), str.end());
    cout << "Reversed string: " << str << endl;
    return 0;
}

//output:
//Reversed string: enolcyC