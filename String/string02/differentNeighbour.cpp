// Q) input a string and returns the number of times the 
//   neighbouring character are different from each other
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "abbcdeffghh";
    int n = str.size(); //11

    int count = 0;
    for(int i=0; i<n; i++){
        if(str[i]!=str[i+1]) count++;
        else i++;
    }
    cout<<count;
}   