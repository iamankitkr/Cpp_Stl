#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v={10,20,30,40,50} ;
    vector<int> :: iterator i= v.begin(); // also auto i=v.begin()
    cout<<(*i)<<" ";
    i++;
    advance(i,3); // modifies thr same past iterator.
    cout<<(*i)<<" ";
    i =v.end();// points address to memory location beyond to last element
    i--;
    cout<<(*i)<<" ";
    //i=next(i) moves one position ahead.  , returns an iterator
    //i=next(i,n) moves n position ahead.
    //i=prev(i) moves one position backward
    //i=prev(i,n) moves n position backward.  
return 0;
    
} 