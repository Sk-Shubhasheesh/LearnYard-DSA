#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    q.push(1);
    q.push(12);
    q.push(11);
    q.push(25);
   while(!q.empty()){
    cout<<q.front()<< " ";
    q.pop();
   }
   cout<<endl;

}