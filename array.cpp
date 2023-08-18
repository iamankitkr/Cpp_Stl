#include<bits/stdc++.h>
using namespace std;
int main(){
    //declaration type 1
    int arra[3]={1,23,43}; 
        for(int i=0;i<3;i++){
        cout<<arra[i]<<" ";
    }
    cout<<endl;

    //declarartion type 2
    array<int,5>arr={1,5,6}; 
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //declarartion type 3
    array<int,5>a;    
    a.fill(0);       // fill every element in array with 0
    cout<<a.at(2);         // return value of an array at particular index.
    cout<<endl;


    array<int,5>ab;
    for(int i=0;i<5;i++){
        ab.at(i)=i+1;
    }
    cout<<ab.size()<<endl;  //return size of an array
    cout<<ab.front()<<endl;   //return front element of an array
    cout<<ab.back()<<endl;       //reurn end element of an array
    //iterate an array & print 
    for(auto it=ab.begin(); it!=ab.end(); it++){
        cout<<*it<<" ";     //it is a pointer so return address , to return value add *operator
    }
    cout<<endl;

    //reverse an array

    for(auto it=ab.rbegin(); it!=ab.rend(); it++){
        cout<<*it<<" ";     //it is a pointer so return address , to return value add *operator
    }
    cout<<endl;

    //other way to revrse an array.
    for(auto it=(ab.end()-1); it>=ab.begin(); it--){
        cout<<*it<<" ";     //it is a pointer so return address , to return value add *operator
    }
    cout<<endl;

    //other way to iterate and print an array
    for(auto it : ab){
        cout<<it<<" ";
    }
    cout<<endl;
    //---------------------------------------------//
    string s="abcdef";
    for(auto it : s){
        cout<<it<<" ";
    }
    cout<<endl;


    return 0;
}