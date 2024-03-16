#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[6] = {5,3,6,4,1,2};
    int n = 6;

    //PRINT ARRAY
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //ALGORITHM
    for(int i=0; i<n-1; i++){

        //CALC MIN_IDX
        int min = INT_MAX;
        int min_idx = -1;
        for(int j=i; j<n; j++){ // SEARCHING MINIMUM INDEX
            if(arr[j]<min){
                min = arr[j];
                min_idx = j;
            }
        }
        
        swap(arr[i], arr[min_idx]); 
    }

    //PRINT ARRAY
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}