//11. Write a Program to Take a String input from the User and Print the Length of that String , and 
// Count the Number of Vowels in the String . 

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int vowelCount=0;

    cout<<"Enter a string:";
    getline(cin,str);
    // calculate the length of the string
    int length=str.length();
    // count the Number of Vowels in the String
    for(char c:str){
    // convert character to lowercase for easier comparision
        c=tolower(c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            vowelCount++;
        }
    }
    // print the results
    cout<<"Length of the string: "<<length<<endl;
    cout<<"Number of Vowels in the String: "<<vowelCount<<endl;
}


// output:
// Enter a string:Arnab Das
// Length of the string: 9
// Number of Vowels in the String: 3