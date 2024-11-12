#include<bits/stdc++.h>
using namespace std;

void table(int n, int x){
    if(x==11) return;
    cout<<(n*x)<<" ";
    table(n,x+1);
}
int main(){
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    table(n,1);
    return 0;
}