// Sum of Array using recursion
#include<bits/stdc++.h>
using namespace std;
int sumArr(int *arr, int n, int index){
    if(index == n-1) return arr[index];
    return arr[index]+sumArr(arr, n, index+1);
}
int main(){
    int arr[] = {1,4,5,6};
    int n = 4;
    int index = 0;
    cout<<sumArr(arr, n, index)<<" ";

}