#include<iostream>
#include<climits>
using namespace std;
int main(){
    cout<<"Enter size of array : ";
    int n; cin>>n;

    int arr[n];
    for(int i=0; i<=n-1; i++){
        cout<<"Enter "<<i<<" index of array : ";
        cin>>arr[i];
    }

    int max = INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(max<arr[i]) max = arr[i];
    }

    int second_max = INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(second_max<arr[i] && arr[i] != max) second_max = arr[i];
    }

    cout<<"The maximum input is "<<max<<endl;
    cout<<"The second maximum input is "<<second_max;


}