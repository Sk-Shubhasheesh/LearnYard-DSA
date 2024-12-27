#include<bits/stdc++.h>
using namespace std;
 int main(){
    // Decleare the map
    map<int, string>myMap;

    // Inserting elements
    myMap.insert({1,"One"}); // using function
    myMap[2] = "Two";
    myMap[3] = "Three";

    // Accessing the element
    cout << "Value for key 1: "<<myMap[1]<<endl;
    cout << "Value for key 2: "<<myMap[1]<<endl;

    // Checking if a key exist using find()
    int keyToFind = 3;
    auto it = myMap.find(keyToFind);
    if(it !=myMap.end()){
        cout << "Key " << keyToFind << " found with value: "<<it->second << endl;
    } else{
        cout << "Key" << keyToFind << " Not found"<<endl;
    }

    // iterating over the map
    cout<< "Map contents:"<<endl;
    for(auto &pair : myMap){
        cout<< "key: "<< pair.first<< ", value " <<pair.second<<endl;
    }

    // Checking the size of map
    cout<<"Size of map:"<<myMap.size()<<endl;

    // Erasing an element'
    myMap.erase(2);
    cout<< "After erasing key 2:" <<endl;
    for(auto &pair : myMap){
        cout<< "key: "<< pair.first<< ", value " <<pair.second<<endl;
    }

    // cleraring the map
    myMap.clear();
   // after clearing ther map size
    cout<<"Size of map:"<<myMap.size()<<endl;



 }