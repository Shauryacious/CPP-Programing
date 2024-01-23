#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v;
    int len = 0;
    while(head){
        v.push_back(head->val);
        len++;
        head = head->next;
    }

    int sum = 0;
    for(int i = len-1; i>=0; i--){
        sum = sum + (v[i])*(pow(2, len-i));
    }
    cout<<sum
    // return sum;
}