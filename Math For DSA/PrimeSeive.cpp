#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    vector<bool> prime(n+1, true);
    for(int i=2; i<=n; i++){
        if(prime[i]){
            int j =2;
            while(i*j <= n){
                prime[i*j] = false;
                j++;
            }
        }
    }
    for(int i=2; i<n; i++){
        if(prime[i]){
            cout<<i<<" ";
        }
    }


}