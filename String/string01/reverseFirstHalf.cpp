#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter your name : ";
    getline(cin, s);

    int len = s.length();

    //REVERSE FIRST HALF

    reverse(s.begin(), s.begin()+(len/2));
    cout<<s;


}