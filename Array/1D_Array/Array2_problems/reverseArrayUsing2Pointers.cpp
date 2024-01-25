#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
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

    display(v);
    cout<<endl;

    //WHILE LOOP

    // int i = 0;
    // int j= (v.size()-1); //5

    // while(i<=j){
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;

    //     i++; j--;
    // }
    // // i goes from 0 --> 1 --> 2
    // // j goes from 5 --> 4 --> 3

    //FOR LOOP ---> two variable for loop

    for(int i=0, j=(v.size()-1); i<=j; i++, j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }

    //VECTOR REVERSE BUILTIN

    // reverse(v.begin(), v.end());

    display(v);

}