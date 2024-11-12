// Try to find the power of n 
#include<bits/stdc++.h>
using namespace std;
int pow(int n, int a){
    if(a==0) return 1;
    return n * pow(n, a-1);
}
int main(){
    int n, a;
    cout<<"Enetr the Number"<<endl;
    cout<<"Enetr the Power"<<endl;
    cin>>n>>a;
    cout<<pow(n, a);
}