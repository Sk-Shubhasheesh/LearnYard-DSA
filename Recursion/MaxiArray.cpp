// Find the maximum element in the array
#include<bits/stdc++.h>
using namespace std;
int maxi(int *arr, int n , int index){
    if(index == n-1) return arr[index];
    return max(arr[index], maxi(arr, n , index+1));
}
int main(){
    int arr[]= {1,5,33,44};
    int n = 4;
    int index = 0;
    cout<<maxi(arr, n , index)<< " ";

}