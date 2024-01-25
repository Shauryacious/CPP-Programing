#include<iostream>
#include<climits>
using namespace std;
int main(){
    cout<<"Enter size of array : ";
    int n; cin>>n;

    int arr[n];
    for(int i=0; i<=n-1; i++){
        cout<<"Enter "<<i+1<<" element of array : ";
        cin>>arr[i];
    }

    int max = INT_MIN; //#include<climits>
    for(int i=0; i<=n-1; i++){
        if(max<arr[i]) max = arr[i];
    }

    cout<<"The maximum entry in array is "<<max;

}