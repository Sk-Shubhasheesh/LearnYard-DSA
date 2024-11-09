#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    
    vec.pop_back();
    //printing the value
    for(int val: vec){
        cout<<val<<" ";
    }
    cout<<endl;
    // Indexing
    cout << "val at idx 2 is " << vec[2] << " or " << vec.at(2) << endl;
    

    // access the first or last value of th vector
    cout << "val at first index is " << vec.front() << endl;
    cout << "val at last index is " << vec.back() << endl;
   
   // Initialization vector with some value
   vector<int>vec1 = {3,6,7, 9};
   for(int loop:vec1){
    cout<<loop<<" ";
   }
   cout<<endl;

   //Creating a vector with fixed size and put same value
   vector<int> vec2(3,10);
   for(int loop:vec2){
    cout<<loop<<" ";
   }
   cout<<endl;
   // Insert value at the mid posstion of the vector
   vec.insert(vec.begin()+2, 100);
   for(int loop:vec){
    cout<<loop<<" ";
   }



  
  
  
  
  return 0;

}