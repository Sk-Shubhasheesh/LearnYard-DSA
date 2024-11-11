//Concept - Divisor Sieve & Sum of Divisor Sieve
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enetr the Number"<<endl;
    cin>>n;
    vector<int>divisor(n+1,0);
    vector<int>sumDivisor(n+1, 0);
    for(int i=1;i<=n; i++){
        for(int j=i; j<=n; j=j+i){
            divisor[j]++;
            sumDivisor[j] +=i;
        }
    }
    for(int i=1; i<=n; i++){
        cout<< i << "->"<<divisor[i]<<" "<<sumDivisor[i]<<endl;
    }
}