#include<iostream>
using namespace std;

int print(int n){
    if(n==1) return;
    int x = n + print(n-1);
    cout<<x;

}
int main(){
    int n = 5;
    print(n);
}