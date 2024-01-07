#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9); //0
    v.push_back(10); //1
    v.push_back(6); //2
    v.push_back(12); //3
    v.push_back(11); //4
    v.push_back(6); //5
    v.push_back(0); //6

    int x = 6; //the element you wanna find

    int idx = -1;

    //FORWARD LOOP

    // for(int i=0; i<v.size(); i++){
    //     if(x==v[i]) idx = i;
    // }
    // cout<<idx;

    //BACKWARD LOOP --> with the help od break; fast

    for(int i= (v.size()-1); i>=0; i--){
        if(x==v[i]) {
            idx=i;
            break;
        }
    }
    cout<<idx;
    
    
}