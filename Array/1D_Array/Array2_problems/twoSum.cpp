#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter the targer sum : "; //7
    int x; cin>>x;

    cout<<"Enter size of array : "; //8 elements
    int n; cin>>n;

    cout<<"Enter your array : "; // 1 3 2 4 3 4 1 6
    vector<int> v;
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if((v[i] + v[j]) == x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
    // (0,7)
    // (1,3)
    // (1,5)
    // (3,4)
    // (4,5)
    // (6,7)
    
}