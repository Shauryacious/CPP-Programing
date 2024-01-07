#include<iostream>
#include<vector>
using namespace std;
int main(){
    //MATRIX 1

    cout<<"Enter no of rows of matrix1 : ";
    int m; cin>>m; // m=2
    cout<<"Enter no of columns of matrix1 : ";
    int n; cin>>n; //n=3

    int matrix1[m][n]; //2x3
    // 1 2 3
    // 4 5 6
    
    //INPUT
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>matrix1[i][j];
        }
    }

    //MATRIX 2

        cout<<"Enter no of rows of matrix2 : ";
    int p; cin>>p; // p=3
    cout<<"Enter no of columns of matrix2 : ";
    int q; cin>>q; // q=4

    int matrix2[p][q]; //3x4
    // 1 2 3 4
    // 5 6 7 8
    // 9 10 11 12
    
    //INPUT
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin>>matrix2[i][j];
        }
    }

    cout<<endl<<endl;

    if(n==p){
        int resultant_matrix[m][q];
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                resultant_matrix[i][j] = 0;
                for(int k=0; k<n; k++){ //n=p
                    resultant_matrix[i][j] += matrix1[i][k]*matrix2[k][j];
                } 
            }
        }

        //PRINT RESULTANT
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                cout<<resultant_matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        // RESULTANT MATRIX
        // 38 44 50 56 
        // 83 98 113 128 

    }
    else cout<<"the matrix cannot be multiplied";

}