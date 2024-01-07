#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; //you need not mention size

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    for(int i=0; i<=(v.size()-1); i++){
        cout<<v[i]<<" ";
    }



}