#include <iostream>
using namespace std;

template <typename DT>
DT arrMax(DT arr[], int n) {
    DT res = arr[0];
    for(int i=0; i<n; i++){
    if(arr[i]>res)
    res=arr[i];
    }
    return res;
}

    int main() {
        int arr1[]= {10,12,16,11};
        cout<< arrMax <int> (arr1,4) << " ";
        int arr2[]= {10,12,16,11,22};
        cout<< arrMax <int> (arr2,5) << " ";
        float arr3[]={10.50,12.60,9.40,8.80,16.99};
        cout<<  arrMax < >  (arr3,5);
        return 0;
    }
    /*in line no 20, we didn't passed the datatype, compiler can guess the datatype 
    from the array above, but it is generally suggested to pass the datatype*/ 