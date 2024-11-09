// By default it internally used Doubly LL

#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l;

    // push_back & push_front
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);

    for(int loop: l){
        cout<<loop<<" ";
    }
    cout<<endl;

    // pop_back & pop_front
    l.pop_back();
    l.pop_front();
    for(int loop: l){
        cout<<loop<<" ";
    }
    cout<<endl;
    return 0;

}