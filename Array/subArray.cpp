// Question- Print all subarray of a given array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the value of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Output"<<endl;
    // logic for subarray
    //  i = 0, j = 0
    //     j = 1
    //     j = 2
    //     j = 3
    // i = 1,  j = 1
    //      j = 2
    //      j = 3
    for (int i = 0; i < n; i++)
    { // i --> starting point
        for (int j = i; j < n; j++)
        { // j --> ending point
            // printing the subarray
            for(int k=i; k<=j; k++){
                cout<< arr[k] << " ";
            }
            cout<<"\n";
        }
    }
}