// In this program we check the array is sorted or not

#include<bits/stdc++.h>
using namespace std;

bool checkArray(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i+1]<arr[i]){
            return false;        }
    }
    return true;

}

int main(){
    int n;
    cout<<"Enetr the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enetr the array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int output = checkArray(arr, n);
    if(output){
        cout<<"The array is Sorted"<<endl;
    } else{
         cout<<"The array is not Sorted"<<endl;
    }
    
}