#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}



int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);

    display(v); cout<<endl;

    int n= v.size(); //9

    for(int i=0, j=n-1; i<j; i++, j--){
        if(v[i] == 1) v[i] = 0;
        else if(v[j] == 0) v[j] =1;
    }
    display(v);
}