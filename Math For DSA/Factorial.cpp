#include<bits/stdc++.h>
using namespace std;
int main(){
    // Itrative Implientation
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    int res=1;
    for(int i=2; i<=n;i++){
        res = res*i;
    }
    cout<<"The Factorial of given Number is: "<<res<<endl;
}