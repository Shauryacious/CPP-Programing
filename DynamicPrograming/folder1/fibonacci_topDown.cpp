#include<iostream>
using namespace std;
int fibo(int n, vector<int>& dp){
  //step1 
  if(n==1 || n==0) return 1;

  if(dp[n] != -1) return dp[n];

  dp[n] = fibo(n-1, dp) + fibo(n-2, dp);
  return dp[n];
}
int main(){
  int n = 20; //7th fibo number
  vector<int> dp(n+1);
  
  for(int i=0; i<n+1; i++){
    dp[i] = -1;
  }
  // cout<<dp[3];

  cout<<fibo(n, dp);
}