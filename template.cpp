#include<iostream>
using namespace std;

template <typename T>
T myMax(T x, T y){
    if(x>y) return x;
    else return y;
}

int main(){
    cout<< myMax <int>  (3,7) <<endl;
    cout<<myMax <char>  ('d','z') <<endl;
    return 0;
}