// Q) Push zeroes to the end while maintaining the relative order of other elements
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[9] = {5,0,1,2,0,0,4,0,3}; // relative order 51243
    int n = 9;

        //PRINT ARRAY
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //ALGORITHM
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]==0) swap(arr[j], arr[j+1]);
        }
    }

        //PRINT ARRAY
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}