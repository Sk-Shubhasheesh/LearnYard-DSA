// Return the indec value of the serch element

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Array Size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enetr the Array value"<<endl;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int serch_element;
    cout<<"Enter the target element"<<endl;
    cin>>serch_element;

    int target = -1;
    for(int i=0; i<n; i++){
        if(arr[i]==serch_element){
            target = i;
            break;
        }
    }

    cout<<"The serch element index is " << target <<endl;


    
}
