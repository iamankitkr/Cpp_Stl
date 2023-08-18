#include<iostream>
using namespace std;

template <typename T, int limit>
T arrMax( T arr[], int n)
{
    if(n>limit) cout<<"error 404"<<endl;
    T res = arr[0];
    for(int i=0; i<n; i++){ 
        if(arr[i]>res){
            res=arr[i];
        }
    }
    return res;
}

int main() {
    int arr1[] = {10, 40, 3};
    cout << arrMax <int,30> (arr1, 3)   <<endl ;
    
    float arr2[] = {10.5, 3.5, 1.5, 30.5};
    cout << arrMax <float, 3> (arr2, 4) << " ";
    return 0;
}
/*process array of size not more than n, so provided the limit as n,limit
compiler specific & user would like to provide it*/

/*non-data type parameter--passing a value, it has to be a constant
value as it going to be processed by compiler.*/

// const int x=100;
// <int,x>  it is allowed.
// int x=1000;
// <int,x> it is not allowed as x is not constant