// A bracket is considered to be any one of the following characters: (, ), {, }, [, or ]. Two brackets are considered to be a matched pair if the an opening bracket (i.e., (, [, or {) occurs to the left of a closing bracket (i.e., ), ], or }) of the exact same type. There are three types of matched pairs of brackets: [], {}, and (). A matching pair of brackets is not balanced if the set of brackets it encloses are not matched. For example, {[(])} is not balanced because the contents in between { and } are not balanced. The pair of square brackets encloses a single, unbalanced opening bracket, (, and the pair of parentheses encloses a single, unbalanced closing square bracket, ].

#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isBalanced(string s){
  int n = s.length();
  if(n%2 != 0) return false;

  //We can directly push char in stack<int> st, but then the ascii value of the char will be saved in the stack
  stack<char> st;
  for(int i=0; i<n; i++){
    if(s[i] == '('){
      st.push(s[i]);
    } else{
      if(!st.empty()) st.pop();
      else return false;
    }
  }
  if(st.empty()) return true;
  return false;
}
int main(){
  string s1 = "()()()";
  string s2 = ")()(";
  string s3 = "(()";
  string s4 = "())()(";
  string s5 = "(())";

  cout<<isBalanced(s1)<<endl;
  cout<<isBalanced(s2)<<endl;
  cout<<isBalanced(s3)<<endl;
  cout<<isBalanced(s4)<<endl;
  cout<<isBalanced(s5)<<endl;
}