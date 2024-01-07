#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

void reversePart(int start, int end, vector<int>& v){
    for(int i=start, j=end; i<=j; i++, j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }


}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(9);
    v.push_back(8);

    display(v); cout<<endl;
    reversePart(0, 3, v); // starting 4 elements will be reversed
    display(v);
}