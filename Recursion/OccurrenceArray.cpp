// Find the occurrence of array 
#include<bits/stdc++.h>
using namespace std;
void recur(vector<int>arr, int index, int target){
    // base case
    if(arr.size()<=index) return;

    if(arr[index]==target) cout<<index<<" ";
    recur(arr, index+1, target);
}

int main(){
    vector<int> arr = {1,2,3,4,3,3,6};
    int index = 0;
    int target = 3;
    recur(arr, index, target);


}