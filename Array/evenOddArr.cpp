// Question - Put even and odd elements of array in two separate array

/*
Step 1 - count the even and odd element which help to create two different array that even and odd array

Step 2 - Basis on the number we put the value into the different array
--- We iterate over the original array like two pointer

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the array value"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // logic for question
    int countEven =0;
    int countOdd = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0) countEven++;
        else countOdd++;
    }
    // in the main array may be all  value will be even or odd so we check condition  
    if(countEven>0){
        cout<<"Even Array"<<endl;
        for(int i=0; i<n; i++){
            if(arr[i]%2==0) cout<<arr[i]<< " ";
        }
        cout<<"\n";
    } 

    if(countOdd>0){
        cout<<"Odd Array"<<endl;
        for(int i=0; i<n; i++){
            if(arr[i]%2!=0) cout<<arr[i]<< " ";
        }
        cout<<"\n";
    }
}
