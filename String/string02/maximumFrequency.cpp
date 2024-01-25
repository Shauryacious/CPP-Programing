#include<iostream>
#include<string>
#include<climits>
using namespace std;
int main(){
    string s = "physicswalllah";
    int n=s.size();

    int max_count = INT_MIN;
    char ch;
    for(int i=0; i<n-1; i++){
        int count = 1;
        for(int j=i+1; j<n; j++){
            if(s[i]==s[j]) count++;
        }
        if(count>max_count){
            max_count = count;
            ch = s[i];
        }
    }

    cout<<ch<<" - "<<max_count;
}