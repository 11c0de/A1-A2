//8. Write down the program for Linear search. 
#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int key){
    
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i; 
        }
    }
    return -1; 
}
int main(){
    int size,key;
    cout<<"Enter size of the array:";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter key:";
    cin>>key;
    int i=linearSearch(arr,size,key);
    if(i==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index "<<i<<endl;
    }
    return 0;
}

// output:
// Enter size of the array:5
// Enter array elements:12 34 56 78 90
// Enter key:78
// Element found at index 3

// Enter size of the array:5  
// Enter array elements:12 34 56 78 90
// Enter key:99
// Element not found
