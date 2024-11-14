#include<bits/stdc++.h>
using namespace std;

void selectionSort(int *arr, int n){
    for(int i = 0; i < n - 1; i++) {
        int mini_element = i; // Assume the current index is the smallest
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[mini_element]) { // Find the largest element
                mini_element = j; // Update mini_element to the index of the larger element
            }
        }
        swap(arr[i], arr[mini_element]); // Swap the current element with the largest element found
    }
}


void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {2,4,9,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printArr(arr, n);

}