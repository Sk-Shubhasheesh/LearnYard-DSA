// SPOJ Problem - https://www.spoj.com/problems/AGGRCOW/

#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>&arr, int N, int C, int mid){
    int cows = 1, lastStalPos = arr[0];
    for(int i=1; i<N; i++){
        if(arr[i]-lastStalPos>=mid){
            cows++;
            lastStalPos = arr[i];
        }
        if(cows==C) return true;
    }
    return false;

}

int getDistance(vector<int>&arr, int N, int C){
    sort(arr.begin(), arr.end());
    int start = 1;
    // int end = mavVal - minVal;
    int end = arr[N-1] - arr[0];
    int ans = -1;
    while(start<=end){
        int mid = (start+end)/2;
        if(isPossible(arr, N, C, mid)){  //right
        ans = mid;
        start = mid+1;
        } else{ // left
            end = mid-1;
        }
    }
    return ans;
}


int main(){
    int N = 5, C= 3;
    vector<int>arr = {1, 2, 8, 4, 9};
    cout<< getDistance(arr, N, C) <<endl;
}