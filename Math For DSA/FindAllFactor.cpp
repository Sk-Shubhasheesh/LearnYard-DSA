#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;

    // first method - Time complexity is high 
    // for(int i=1; i<=n; i++){
    //     if(n%i == 0){
    //         cout<<i<<endl;
    //     }
    // }


    // second method
    for(int i=1; i*i<=n; i++){
       if(n%i==0){
        cout<<i<<endl;
        if(i != (n/i)){
            cout<<n/i<<endl;
        }
        
       }
    }
}