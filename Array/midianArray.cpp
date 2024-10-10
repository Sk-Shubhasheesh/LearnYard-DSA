// Given a sorted array find its median
// Given array will be already sorted
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array element"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    double ans;
    // if array is even
    if(n%2==0){
        ans = float(arr[n/2]+arr[n/2-1])/2.0;
    }else{
        ans =  arr[n/2];
    }
    cout<<ans;
    return 0;
}