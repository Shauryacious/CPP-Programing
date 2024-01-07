#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);

    for(int i=0; i<=4; i++){
        cout<<"Enter 5 input : ";
        cin>>v[i]; 
    }

    cout<<"Your array is : ";

    for(int i=0; i<=4; i++){
        cout<<v[i]<<" ";
    }
  
}