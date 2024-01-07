#include<iostream>
using namespace std;
int main(){
    cout<<"Enter size of array : ";
    int n; cin>>n;

    int arr[n];
    for(int i=0; i<=n-1; i++){
        cout<<"enter "<<i<<" index of array : ";
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0; i<=n-1; i++){
        sum = sum + arr[i];
    }
    cout<<"Sum of array is "<<sum;
}