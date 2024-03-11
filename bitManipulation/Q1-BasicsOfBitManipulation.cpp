// 1. You are given a number n.
// 2. Print the number produced on setting(on) its i-th bit.
// 3. Print the number produced on unsetting(off) its j-th bit.
// 4. Print the number produced on toggling its k-th bit.
// 5. Also, Check if its m-th bit is on or off. Print 'true' if it is on, otherwise print 'false'.

// Sample Input
// 57
// 3 
// 3 
// 3 
// 3
// Sample Output
// 57
// 49
// 49
// true

#include<iostream>
using namespace std;
int main(){
  int n, i, j, k, m;
  cout<<"Enter INPUT: ";
  cin>>n>>i>>j>>k>>m;

  int on_mask = 1<<i; //1 ko right shift karo i baar for ex if i=3 in nibble system
  // 1 = 0001   --> apply 3 right shift 1<<3
  //     0010
  //     0100
  //     1000    <--- so ye hai tumhara 1<<3

  //To ON a bit, uska 1 ke sath OR krdo

  cout<<(n | on_mask)<<endl;

  //To OFF a bit, uska 0 ke sath AND krdo

  int off_mask = ~(1<<j);
  cout<<(n & off_mask)<<endl;

  //To TOGGLE a bit, uska 1 ke sath XOR krdo
  // a^0 = a      a^1 = ~a     so 1 ke sath XOR toggle krne ke kaam aata hai and 0 ke sath jaisa rhta hai waisa hi chod deta hai

  int toggle_mask = 1<<k;
  cout<<(n ^ toggle_mask)<<endl;

  //To check if a bit is on or not -> us perticular bit ka 1 ke sath & krdo, baki sab toh 0 ho jayega, and final number agar 0 aaya toh wo perticular bit off tha wrna on tha

  //          *
  //    0 1 1 1 0 1 0 1
  // &  0 0 0 1 0 0 0 0 
  //    ----------------
  //    0 0 0 1 0 0 0 0 
  
  // So agar wo bit on hogi toh answer !=0 aayega wrna =0 aayega

  int check_mask = 1<<m;
  int ans = n & check_mask;
  cout<<(ans == 0 ? 0 : 1);



}