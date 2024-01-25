#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;//size capacity
    v.push_back(1); //1     1
    v.push_back(3); //2     2
    v.push_back(5); //3     4
    v.push_back(7); //4     4
    v.push_back(9); //5     8
    v.push_back(1); //6     8
    v.push_back(3); //7     8
    v.push_back(5); //8     8
    v.push_back(7); //9     16
    v.push_back(9); //10    16
    v.push_back(1); //11    16

    cout<<"Capacity is : "<<v.capacity()<<endl;
    cout<<"Size is : "<<v.size()<<endl<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<"AFTER POP_BACK"<<endl<<endl; //capacity remains same

    cout<<"Capacity is : "<<v.capacity()<<endl;
    cout<<"Size is : "<<v.size();






}