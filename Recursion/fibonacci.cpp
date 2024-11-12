// Print the Nth term of fibonacci series
#include<bits/stdc++.h>
using namespace std;

int fibbo(int n){
    if(n==1 || n==2) return n-1;
    int a = fibbo(n-1);
    int b = fibbo(n-2);
    return a+b;
}

int main(){
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    cout<<fibbo(n)<<endl;

}