#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

void overwrite(int noz, int noo, int size, vector<int>& v){
    for(int i=0; i<size; i++){
        if(i<noz) v[i] = 0;
        else v[i] = 1;
    }

}

void sort01(vector<int>& v){
    int n = v.size(); //9
    int noz = 0; //no of zeros
    int noo = 0; //no of ones
    for(int i=0; i<n; i++){
        if(v[i] == 0) noz++;
        else noo++;
    }

    overwrite(noz, noo, n, v);


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
    sort01(v);
    display(v);

}