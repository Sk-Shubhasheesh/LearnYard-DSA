#include<bits/stdc++.h>
using namespace std;

void insertionSort(int *arr, int n){
    // consider first element as sorted so start loop using 1
    for(int i=1; i<n; i++){
        int current_element = arr[i];
        int privious_element = i-1;
        while(privious_element>=0 && arr[privious_element]>current_element){
            arr[privious_element+1] = arr[privious_element];
            privious_element--;
        }
        arr[privious_element+1] = current_element;
    }
}

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {2,4,1,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    printArr(arr, n);
    

}