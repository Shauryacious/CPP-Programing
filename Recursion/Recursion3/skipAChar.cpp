#include<iostream>
using namespace std;
void skipChar(string empty, string str, int idx){
  if(idx == str.length()){
    cout<<empty;
    return;
  }
  if(str[idx] == 'a') skipChar(empty, str, idx+1);
  else skipChar(empty+str[idx], str, idx+1);
}
int main(){
  string str = "Radhe Radhe";
  skipChar("", str, 0);
}