#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, int>m;
    // Insert or update value
    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 40;
    //another way to Insert  value
    m.insert({"camera", 25});

     
    for(auto p : m){
        cout<<p.first<< " " <<p.second << endl;
    }

    // check the count
    cout<< "Count = "<<m.count("laptop")<<endl;
    if(m.find("camera") != m.end()){
        cout<< "found\n";
    } else{
        cout<< "not found\n";
    }



    // Unordered Map
    unordered_map<string, int>un_map;
    un_map.emplace("tv", 23);
    un_map.emplace("laptop", 232);
    un_map.emplace("speaker", 40);
    for(auto p : un_map){
        cout<<p.first<< " " <<p.second << endl;
    }



}