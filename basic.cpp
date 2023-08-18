#include<bits/stdc++.h>   //include all libraries like vector,set,map,sortfunction...
using namespace std;        //scope kind of things, contain all function in std namespace.

namespace ankit{                //explicitly declare a scope name ankit.
    int val=50;
}

int main(){
    double value=10.0;
    cout<<value<<endl;


    cout<<ankit::val<<endl;  //to print namespace ankit

    return 0;
}
