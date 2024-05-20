#include<iostream>
#include<vector>
using namespace std;

class SegmentTree{
public:
    vector<int> seg;
    SegmentTree(int n){
        seg.resize(4*n + 1);
    }
    void build(vector<int>& arr, int idx, int low, int high){
        //BASE CASE
        if(low == high){
            seg[idx] = arr[low]; // when(low == high) ===> arr[low] == arr[high] 
            return;
        }
        
        //LEFT & RIGHT CALLS
        int mid = (low+high)/2;
        //Left Call
        build(arr, 2*idx+1, low, mid);

        //right Call
        build(arr, 2*idx+2, mid+1, high);

        // Combine results
        seg[idx] = min(seg[2*idx+1], seg[2*idx+2]);
    }

    void display_SGT(){
        cout<<"Display SGT : "<<endl;
        for(int i=0; i<seg.size(); i++){
            cout<<seg[i]<<" ";
        }
        cout<<endl;
    }

    int query(int idx, int low, int high, int l, int h){
        //! 3 CASES !//
        // CASE 1) No Overlap
        if(l > high || h < low){
            // l ---- h ---- low ---- high
            // or
            // low ---- high ---- l ---- h
            //i.e. [l, h] is completely outside [low, high]
            return INT_MAX;
        }

        // CASE 2) Complete Overlap
        if(l <= low && high <= h){
            // l ---- low ---- high ---- h
            //i.e. [l, h] is completely inside [low, high]
            return seg[idx];
        }

        // CASE 3) Partial Overlap
        int mid = (low+high)/2;
        int left = query(2*idx+1, low, mid, l, h);
        int right = query(2*idx+2, mid+1, high, l, h);
        return min(left, right);
    }

    void replace(vector<int>& arr, int idx, int low, int high, int i, int val){
        if(low == high){
            // arr[i] = val; may or may or may not be required
            seg[idx] = val;
            return;
        }

        int mid = (low+high)/2;
        if(i <= mid){ //left call
            replace(arr, 2*idx+1, low, mid, i, val);
        }
        else if(i > mid){ //right call
            replace(arr, 2*idx+2, mid+1, high, i, val);
        }
        seg[idx] = min(seg[2*idx+1], seg[2*idx+2]);
    }
};

int main(){

    //! INPUT SIZE & ARRAY !//
    cout<<"Enter input : "<<endl;
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    //! BUILD SEGMENT TREE !//
    SegmentTree SGT(n);
    SGT.build(arr, 0, 0, n-1);
    SGT.display_SGT();

    //! INPUT Queries !//
    int q; cin>>q;
    while(q--){
        int l, h; cin>>l>>h;
        cout<<"Query Result : "<<SGT.query(0, 0, n-1, l, h)<<endl;
    }

    int i, val; cin>>i>>val;
    SGT.replace(arr, 0, 0, n-1, i, val);
    SGT.display_SGT();
    return 0;
}

/*
    INPUT : 
    6
    1 4 6 2 3 5
    3
    0 3
    1 4
    4 5

    OUTPUT : 
    Display SGT : 1 1 2 1 6 2 5 1 4 0 0 2 3 0 0 0 0 0 0 0 0 0 0 0 0
    6
    1 4 6 2 3 5
    3
    0 3 -> 1
    1 4 -> 2
    4 5 -> 3

*/