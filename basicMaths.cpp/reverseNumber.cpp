//Given a Number 23567 return 76532
//Ex 2: 35000 return 53 as 0 doesnt count

#include<iostream>
using namespace std;

int reverseNum(int n){
  int ans = 0;
  while(n > 0){
    int temp = n%10; //Get last digit
    ans = ans*10 + temp; //Add the last digit to the ans
    n = n/10; //remove last digit from n
  }

  return ans;
}

int main(){
  cout<<reverseNum(23567)<<endl;
  cout<<reverseNum(35000)<<endl;

}