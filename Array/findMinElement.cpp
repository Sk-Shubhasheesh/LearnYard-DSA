#include<bits/stdc++.h>
using namespace std;
int minElement(int arr[]){
    int min = arr[0];
    for(int i=0; i<5; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int arr[] = {22,34,56,2,67};
    cout<<minElement(arr);

}