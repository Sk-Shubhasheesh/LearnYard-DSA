#include<bits/stdc++.h>
using namespace std;
bool findElement(int arr[], int element){
    for(int i=0; i<5; i++){
        if(arr[i]==element) {
            return true;
        }
    }
    return false;
}
int main(){
    int arr[5];
    cout<<"Enter The Arry with 5 element"<<endl;
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    // check the element is present or not
    int element;
    cout<<"Eneter the element that you want to find"<<endl;
    cin>>element;
    int out = findElement(arr, element);
    if(out){
        cout<<"The element is present inside the array"<<endl;
    } else{
         cout<<"The element is not present inside the array"<<endl;
    }
}