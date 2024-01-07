#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    for(int i=0; i<3; i++){ // i --> row no
        for(int j=0; j<3; j++){ // j --> col no
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}