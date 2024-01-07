#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = "My name is Shaurya Agrawal";
    // cout<<str;

    //TAKING INPUT
    string s;
    //cin>>s; //only works for single word without space

    //use getline to take input with spaces
    getline(cin, s);
    cout<<s;
}