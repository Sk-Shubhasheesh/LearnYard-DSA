//Question - Reversed an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enetr the array value"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Approach 1 - for loop

    for(int i=0; i<n/2; i++){
        int temp =arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1]=temp;
    }
    cout<<"Reveresd Array"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    // Approach 2 - while loop
    int s = 0,  e = n-1;
    while(s<e){
        // int temp =arr[s];
        // arr[s] = arr[e];
        // arr[e]=temp;
        swap(arr[s], arr[e]);
        s++;
        e--;
    }



}