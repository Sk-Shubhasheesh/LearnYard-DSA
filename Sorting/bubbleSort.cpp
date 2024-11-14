#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n){
    // loop for using pass
    for(int i=0; i<n; i++){
        int flag = false;
        // loop for using comparison
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = true;

            }
        }
        if(!flag){
            break;
        }
    }
}

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]= {3,2,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printArr(arr, n);

}