#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>arr, int n, int target){
    int start = 0;
    int end  = n-1;
    int ans = n;
    while(start<end){
        int mid = (start+end)/2;
        if(arr[mid]>=target){
            end = mid-1;
            ans = mid;
        } else{
            start = mid+1;
        }
    }
    return ans;
}
int main(){
     vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, target = 9;
    int ind = lowerBound(arr, n, target);
    cout << "The lower bound is the index: " << ind << "\n";
    return 0;
}