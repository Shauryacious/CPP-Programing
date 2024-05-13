#include<iostream>
#include<vector>
#include <utility>
using namespace std;
int main(){
    //vector<int> v(5) = {1,2,3,4,5};
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);



    // DECLARATION
    vector<int> ::iterator it = v.begin();
    // LOOP USING ITERATOR SYNTAX
    for(it = v.begin(); it != v.end(); it++){
        cout<<(*it)<<" ";
    }

    cout<<endl<<endl;

    // vector< pair<int,int> > vecp = { {1,2}, {3,4}, {5,6}}; 
    vector< pair<int, int> > vecp;
    vecp.push_back(make_pair(1, 2));
    vecp.push_back(make_pair(3, 4));
    vecp.push_back(make_pair(5, 6));

    //DECLARATION
    vector< pair<int, int> > ::iterator it2 = vecp.begin();
    //LOOP USING ITERATOR SYNTAX
    for(it2 = vecp.begin(); it2 != vecp.end(); it2++){
        cout<<(*it2).first<<" "<<it2->second<<endl;
    }

    //*      *it2.first  == it2->first
    //!     TADAAAA
    //?     Colorful Notes

    //USE of auto in ITERATORS
    //! vector< pair<int, int> > ::iterator it3 = vecp.begin();
    //iski jagah
    // auto it3 = vecp.begin();

    //? so loop ab aise bhi likh skte hai
    for(auto it3 = vecp.begin(); it3 != vecp.end(); it3++){
        cout<<"Hi ";
    }
}