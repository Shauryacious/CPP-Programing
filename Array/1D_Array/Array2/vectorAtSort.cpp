#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(12);
    v.push_back(2);
    v.push_back(32);
    v.push_back(52); //92
    v.push_back(22);
    v.push_back(82);
    v.push_back(72);
    v.push_back(92);
    v.push_back(62);
    v.push_back(42);

    //AT IN VECTORS

    // v.at(3) = 92;
    // cout<<v.at(2)<<" "<<v.at(3)<<endl;

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    cout<<endl<<endl;

    //SORT ---> arranging in ascending order
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

}