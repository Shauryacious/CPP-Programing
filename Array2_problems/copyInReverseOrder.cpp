#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(7);
    v1.push_back(4);

    display(v1);
    cout<<endl;

    int n = v1.size(); //6
    vector<int> v2(n);

    for(int i=0; i<n; i++){
        int j = (n-1) - i;

        v2[j] = v1[i];
    }

    display(v2);

}