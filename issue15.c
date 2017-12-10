// C++ program to Sort square of the numbers
// of the array
#include<bits/stdc++.h>
using namespace std;
 
// Function to sort an square array
void sortSquares(int arr[], int n)
{
    // First convert each array elements
    // into its square
    for (int i = 0 ; i < n ; i++)
        arr[i] = arr[i] * arr[i];
 
    // Sort an array using "sort STL function "
    sort(arr, arr+n);
}
 
// Driver program to test above function
int main()
{
    int arr[] = { -6 , -3 , -1 , 2 , 4 , 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    cout << "Before sort " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " " ;
    sortSquares(arr, n);
 
    cout << "\nAfter Sort " << endl;
    for (int i = 0 ; i < n ; i++)
        cout << arr[i] << " " ;
 
    return 0;
}
