// WAP to print N to 1 . Eg N=5 out -> 5 4 3 2 1
#include<bits/stdc++.h>
using namespace std;
void Number(int n){
    if(n==0)return;
    cout<<n<<" ";
    Number(n-1);
}
int main(){
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    Number(n);
}