#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    //PRINT
    for(int i=0; i<3; i++){ // i --> row no
        for(int j=0; j<3; j++){ // j --> col no
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 

    cout<<endl<<endl;

    //TRANSPOSE IN SAME MATRIX
    int m = 3; //row number
    int n = 3; //column no
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(j>i){ //swap
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }

    //PRINT
    for(int i=0; i<3; i++){ // i --> row no
        for(int j=0; j<3; j++){ // j --> col no
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}