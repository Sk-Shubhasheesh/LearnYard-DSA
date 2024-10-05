// Question - Insert the element at the specific position
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the Array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the position where you want to insert value"<<endl;
    int position;
    cin>>position;
    cout<<"Enter the element value to insert"<<endl;
    int value;
    cin>>value;

    // create a new array for the new value which will be insert
    int answer[n+1];
    int j=0;
    for(int i=0; i<n+1; i++){
        if(i == position-1){
            answer[i] = value;
        }else{
            answer[i]=arr[j];
            j++;
        }
    }

    //print the new array
     for(int i=0; i<n+1; i++){
        cout<<answer[i]<< " ";
    }

    return 0;

}