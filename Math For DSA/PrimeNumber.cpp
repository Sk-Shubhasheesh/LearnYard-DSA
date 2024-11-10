#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enetr the Number"<<endl;
    cin>>n;
    int flag = 0;
    for(int i=2; i<=n-1; i++){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag==0){
        cout<<"The Giving Number is Prime Number"<<endl;
    }else{
       cout<<"The Giving Number is not a Prime Number"<<endl; 
    }
}