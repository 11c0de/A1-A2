// 14. Find the 1st and the 2nd maximum element from the given array.
//  [23, 11, 22, -1, -99, 12, 45, 9, 31]
//  Hint – Sort the array.

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {23, 11, 22, -1, -99, 12, 45, 9, 31};
    int size = sizeof(arr) / sizeof(arr[0]);
    // sort the array in ascending order
    sort(arr, arr + size);

    int firstMax = arr[size - 1];
    int secondMax = arr[size - 2];

    cout << "1st maximum element: " << firstMax << endl;
    cout << "2nd maximum element: " << secondMax << endl;
    return 0;
}

// output:
// 1st maximum element: 45
// 2nd maximum element: 31