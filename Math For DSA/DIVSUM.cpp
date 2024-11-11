// Spoj Problem  Divisor Summation - https://www.spoj.com/problems/DIVSUM/

// use concept Divisor&Sum divisor seive + preparmutation
#include<bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the testCase"<<endl;
    cin>>testCase;
    int N = 500001;
    vector<int>sumDivisor(N, 0);
    // Precompute the sum of divisors for all numbers up to N
    for(int i=1;i<=N; i++){
        for(int j=2*i; j<=N; j=j+i){
            sumDivisor[j] +=i;
        }
    }
    while(testCase>0){
        int n;
        cout<<"Enetr the Number"<<endl;
        cin>>n;
        cout<<sumDivisor[n]<<endl;
        testCase--;
    }

}