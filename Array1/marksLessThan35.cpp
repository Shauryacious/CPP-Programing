#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number of students : ";
    int n; cin>>n;
    int marks[n];
    for(int i=0; i<=n-1; i++){
        cout<<"Enter marks of roll no "<<i+1<<" : ";
        cin>>marks[i];
    }

    for(int i=0; i<=n-1; i++){
        if(marks[i]<=35) cout<<"roll no "<<i+1<<" is fail"<<endl;
    }


}