// Find the frequency of each element in array
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int, int>mp;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];

    }
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<mp[arr[i]]<<endl;
    }
}