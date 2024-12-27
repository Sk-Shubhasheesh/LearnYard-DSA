// print the frequency of all elements
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {10,10,100,10000,10,5};
    
    // key -> array element
    // vale = frequency
    map<int, int>m ={};
    for(int i=0; i<6; i++){
        // m[10]->1
        // m[10]->2
        m[arr[i]]++;
    }
    for(auto x: m){
        cout<<x.first<< "->"<<x.second<<endl;
    }
}