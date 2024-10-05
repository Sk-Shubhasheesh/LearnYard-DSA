// Find smallest & Second smallest in Array
// we solve the problem using sorting wesort the array & tell the fisrt element as smallest and second element as Second smallest but sorting takes the time so it is not a good aproach

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enetr the array value"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // logic for smallest
    int min_ele = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<min_ele){
            min_ele = arr[i];
        }
    }

    //logic for second smallest
    int sec_min_ele = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<sec_min_ele && arr[i]!=min_ele){
            sec_min_ele = arr[i];
        }
    }

    cout<<min_ele<<" "<<sec_min_ele;
    return 0;

}