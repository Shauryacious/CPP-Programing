#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[6] = {5,3,6,4,1,2};
    int n = 6;

    //PRINT ARRAY
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //BUBBLE SORTING
    bool flag = true;
    for(int i=0; i<n-1; i++){ // n-1 passes or traversing
        for(int j=0; j<(n-1)-i; j++){
            if(arr[j]>arr[j+1]){ //swap

                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                
                swap(arr[j], arr[j+1]);
                flag = false;
            }
        }
        if(flag==true) break; //sawp didn't happen i.e. array/vector is sorted
    }

    //PRINT ARRAY
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}