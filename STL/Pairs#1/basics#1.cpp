#include<iostream>
#include <utility>
using namespace std;
int main(){
    //DECLARATION
    pair<int, string> p1;
    pair<int, string> p2;

    //INITIALIZATION -> Two ways
    //1)
    p1 = make_pair(108, "Radhe Radhe");
    //2)
    // Correct initialization using curly braces
    // p2 = {27, "jan"};

    
    cout<<p1.first<<" -> "<<p1.second<<endl;
    cout<<p2.first<<" -> "<<p2.second;
}