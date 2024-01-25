#include<iostream>
using namespace std;
int main(){
    cout<<"Enter size of array : ";
    int n; cin>>n;

    int arr[n];
    for(int i=0; i<=n-1; i++){
        cout<<"Enter "<<i+1<<" element of array : ";
        cin>>arr[i];
    }

    cout<<"Enter the number you wanna search : ";
    int search; cin>>search;

    bool flag = false; //Check Mark
    for(int i=0; i<=n-1; i++){
        if(search==arr[i]) flag = true;
    }

    if(flag == true) cout<<"Presesnt";
    else cout<<"404 Not found";

}