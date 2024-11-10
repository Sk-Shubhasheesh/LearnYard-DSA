#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int, int> p = {1,2};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    // create different type pair
    pair<string, int> res={"shubhu", 2};
    cout<<res.first<<endl;
    cout<<res.second<<endl;

    // create pair of pair
    pair<int, pair<char, int>>out = {1, {'a', 2}};
    cout<<out.first<<endl;
    cout<<out.second.first<<endl; // a
    cout<<out.second.second<<endl; // 3

    // create a vector of pair
    vector<pair<int, int>>vec = {{1,2}, {3,4}, {4,5}};
    vec.push_back({6, 7});
    vec.emplace_back(7, 8); // in-place objects create
    // for(pair<int, int>p:vec){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    for(auto p: vec){
        cout<<p.first<<" "<<p.second<<endl;
    }


}