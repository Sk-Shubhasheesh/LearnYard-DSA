// Rotate array by K place 

/*
arr= [10,20,30,40,50,60,70,80,90,100] K = 3

// 1st Rotate
output= [20,30,40,50,60,70,80,90,100,10]
// 2nd Rotate
output= [30,40,50,60,70,80,90,100,10,20]
//3rd Rotate
output= [40,50,60,70,80,90,100,10,20,30]


// Approach
we try to genrate a new index of every element so we fnd new index by using formula i-K. Some index will be give negative value so we add array size for negative index i-K+N.

So we cerate a new array as name result and put the value
         res[newIndex]=arr[i]

If K value is gerater then n We can see the array is contain cycle means if we rotate the given array time 5 that is equl to rotate the first time. and  if we rotate the given array time 6 that is equl to rotate the second time. Menas all are cycle.
so K=K%N

 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enetr the array size"<<endl;
    cin>>n;
    int k;
    cout<<"Enetr the array rotatet times"<<endl;
    cin>>k;
    int arr[n];
    cout<<"Enter the Array value"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int reversed[n];
    k = k%n; // 5%4=1
    for(int i=0;i<n;i++){
        int newIndex = i-k;
        if(newIndex < 0){
            newIndex += n;
        }
        reversed[newIndex] =arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<reversed[i]<<" ";
    }

}