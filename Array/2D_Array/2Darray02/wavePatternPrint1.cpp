#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter no of rows of matrix : ";
    int m; cin>>m; // m=4
    cout<<"Enter no of columns of matrix : ";
    int n; cin>>n; //n=4

    int matrix[m][n]; //4x4
    // 1 2 3 4
    // 5 6 7 8 
    // 9 10 11 12

    //INPUT
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }

    cout<<endl<<endl;

    //NORMAL PRINTING
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;

    //WAVE FORM PRINTING
    for(int i=0; i<m; i++){
        if(i%2==0){ //i=0,2,4 normal order
            for(int j=0; j<n; j++){
                cout<<matrix[i][j]<<" ";
            }
        }
        else{ //i=1,3,5 reverse order
            for(int j=n-1; j>=0; j--){
                cout<<matrix[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}