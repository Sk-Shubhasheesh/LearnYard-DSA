#include<bits/stdc++.h>
using namespace std;
// int main(){
//     cout<<"Shubhasheesh"<<endl;
//     main(); // print infinaite times

// }


// To solve this problem we use recursion
void func(int n){
    if(n==0)return;
    cout<<"Shubhasheesh"<<endl;
    func(n-1);
}
int main(){
    func(5);
}