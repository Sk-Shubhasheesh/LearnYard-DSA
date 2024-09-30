#include<bits/stdc++.h>
using namespace std;
int main(){
    // int roll_no[50];
    // //when we run the program again the garbage value will be change beacuse every time the memory will be aocate in different place
    // cout<<roll_no[0]<<endl;
    // cout<<roll_no[1]<<endl;


    int marks[5];
    for(int i=0; i<5; i++){
        cin>>marks[i];
    }
    cout<<marks[4]<<endl;
    // another way to access same thing- its called associative property and [] its called operator
    cout<<4[marks]<<endl;

    //gives the address of starting index & marks is nothing but a pointer
    cout<<marks<<endl;
    // it is derefencing and gives the value
    cout<<*marks<<endl;

    cout<<*(marks+1)<<endl;
    
    cout<<(marks+1)<<endl; // address
    // we are trying to access the 5th index which is not tke by me
    // The reason the C++ compiler allows you to access out-of-bounds indices without immediately flagging an error is that C++ does not perform automatic bounds checking for arrays. This is by design for efficiency reasons, as adding bounds checks at every array access would slow down the program. C++ is focused on performance, especially in systems programming, where control over low-level operations is essential.
    marks[5]=100;
    cout<<marks[5]<<endl;


    return 0;
}