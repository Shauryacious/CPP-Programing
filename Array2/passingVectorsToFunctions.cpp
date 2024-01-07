#include<iostream>
#include<vector>
using namespace std;

void change(vector<int> vec){ 
//a new vector vec is created with data 1 3 5 7 9
    vec.at(0) = 27; 
// vector vec ---> 27 3 5 7 9 but still the vector v is 1 3 5 7 9
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
}

void change_passByReference(vector<int>& a){ //&--> ampercent operator
//"a" is not a new vector rather it just points at vector v
    a[0] = 2701; 
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }


}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    cout<<endl<<endl;

    change(v); //pass by value......not reference ----> no change in vector v

    cout<<endl<<endl;

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    cout<<endl<<endl;

    change_passByReference(v); //pass by reference-->change in vector v is possible

    cout<<endl<<endl;

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }





}