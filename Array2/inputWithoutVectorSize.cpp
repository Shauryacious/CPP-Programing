#include<iostream>
#include<vector>
using namespace std;
int main(){

    //DYNAMIC ARRAY

    vector<int> v;

    cout<<"enter the no of elements you want : ";
    int n; cin>>n;

    for(int i=1; i<=n; i++){
        cout<<"enter your input : ";
        int x; cin>>x;
        v.push_back(x);
    }

    cout<<"Your array is : ";

    for(int i=0; i<=n-1; i++){
        cout<<v[i]<<" ";
    }
  
}