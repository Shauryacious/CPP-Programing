#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);

    cout<<"Capacity is : "<<v.capacity()<<endl;
    cout<<"Size is : "<<v.size()<<endl<<endl;

    vector<int> vec(5,7); // initial size = 5, each element = 7

    cout<<vec[3];
  






}