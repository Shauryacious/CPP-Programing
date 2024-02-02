#include<iostream>
#include<string>
#include<stack>
using namespace std;

string RemoveDuplicates(string s){
  stack<char> st;
  st.push(s[0]);
  for(int i=1; i<s.length(); i++){
    if(st.top() != s[i]){
      st.push(s[i]);
    }
  }
  string ans = "";
  while(st.size() > 0){
    char x = st.top();
    st.pop();
    ans += x;
  }

  reverse(ans.begin(), ans.end());
  return ans;
}
int main(){
  string s1 = "aaabbcaadddccbbc";
  cout<<RemoveDuplicates(s1)<<endl;
}