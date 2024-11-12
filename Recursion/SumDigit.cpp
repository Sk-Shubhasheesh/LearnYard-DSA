#include<bits/stdc++.h>
using namespace std;

int f(int n){
    if(n>=0 && n<=9) return n;
    return f(n/10)+(n%10);
}
int main(){
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    int result = f(n);
    cout<<result<<endl;

}