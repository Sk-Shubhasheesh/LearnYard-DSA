#include<bits/stdc++.h>
using namespace std;

// printArray function
void printArr(int arr[5]){
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}

// Sum of array
int sumArr(int arr[5]){
    int sum=0;
    for(int i=0; i<5; i++){
        sum +=arr[i];
    }
    return sum;
}
int main(){
    int arr[5];
    for(int i= 0; i<5; i++){
        cin>>arr[i];
    }

    printArr(arr);
    cout<<endl;
    // sumArray function call
    cout<<sumArr(arr);

    return 0;
}