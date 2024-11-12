#include<bits/stdc++.h>
using namespace std;
void printArr(int *arr, int index, int length){
    if(index == length) return;
    cout<<arr[index]<<"\n";
    printArr(arr, index+1, length);
}

int main(){
    int length = 5;
    int arr[] = {2,4,5,7,9};
    int index = 0;
    printArr(arr, index, length);
    

}