#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<vector<int>>vec;           //initialise a 2D vector.

    vector<int>ankit1;
    ankit1.emplace_back(10);
    ankit1.emplace_back(20);

    vector<int>ankit2;
    ankit1.emplace_back(9);
    ankit1.emplace_back(19);

    vector<int>ankit3;
    ankit1.emplace_back(24);
    ankit1.emplace_back(27);


    vec.emplace_back(ankit1);
    vec.emplace_back(ankit2);
    vec.emplace_back(ankit3);



    //it is vector itself , first it will be ankit1 ..ankit2..ankit3...
    for(auto it : vec){
        for(auto innerit : it){
            cout<<innerit<<" ";
        }
        cout<<endl;
    }
    //other way to iterate and print a vector.
    for(int i=0; i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<< " ";
        }
        cout<<endl;
    }
    int n,m;
    cin>>n>>m;

    //define  (n x m) sized vector
    vector<vector<int>>vec(n, vector<int>(m,0));

    //for different value you need to run a for loop
    //array of vector
    vector<int>arr[4];        // in graph we use this because we know no. of nodes.
    arr[0].push_back(2);
    arr[0].push_back(3);    //pushed 2,3 at arr[0]


        //define  (n x m x l) sized vector
    vector<vector<vector<int>>> vec(n, vector<vector<int>>(m, vector<int>(l, 0)));
    




    
    return 0;
}