#include<bits/stdc++.h>
using namespace std;
int main(){
    //vector declaration 1
    vector<int>vec;       //vector of size 0 is created.
    vec.push_back(0);     //insert element in vector.
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(1);
    vec.push_back(9);
    vec.push_back(7);

    //segmentation fault if we push back 10^7 times.

    for(auto it : vec){           //iterate and print value in vector
        cout<<it<<" ";
    }
    cout<<endl;

    vec.pop_back();  //pop last element entered.

    for(auto it : vec){
        cout<<it<<" ";
    }
    cout<<endl;

    vec.clear();         //erase all element at once.

    //vector declaration 2

    vector<int> vec1(4,0);                      //vector of size 4 initialised with 0
    vector<int> vec2(4,10);                     //vector of size 4 initialised with 10
    swap(vec1,vec2);           //swap both the vector   

    //create copy of vector 2 in vec 3

    vector<int>vec3(vec2);         
    //or vector<int>vec3(vec2.begin(),vec2.end());

    for(auto it : vec3){
        cout<<it<<" ";
    }
    cout<<endl;

    //vector ankit1 of some size less than size of ankit
    vector<int> ankit;
    ankit.push_back(10);
    ankit.push_back(12);
    ankit.push_back(8);
    ankit.push_back(16);
    ankit.push_back(9);
    ankit.push_back(18);

    vector<int>ankit1(ankit.begin(), ankit.begin()+3);
    for(auto it : ankit1){
        cout<<it<<" ";
    }
    cout<<endl;

        for(auto it=ankit1.begin(); it!=ankit1.end(); it++){
        cout<<*it<<" ";     //it is a pointer so return address , to return value add * operator
    }
    cout<<endl;

    return 0;
}

// push_back() and emplace_back() are same, just emplace_back() take lesser time than ohter.