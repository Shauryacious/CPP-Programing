//You are given two integer arrays nums1 and nums2, sorted in non-decreasing order,
//and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
//Merge nums1 and nums2 into a single array sorted in non-decreasing order.
//The final sorted array should not be returned by the function, 
//but instead be stored inside the array nums1. To accommodate this, 
//nums1 has a length of m + n, where the first m elements denote the elements that should be merged, 
//and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i=m-1, j=n-1, k=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                i--;
            }
            else if(nums1[i]<nums2[j]){
                nums1[k]=nums2[j];
                j--;
            }
            else{
                nums1[k]=nums1[i];
                nums1[k-1]=nums1[i];
                i--; j--; k--;
            }
            k--;
        }
        if(j==-1){
            while(i>=0){
                nums1[k]=nums1[i];
                i--; 
                k--;
            }
        }
        else if(i==-1){
            while(j>=0){
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
}

int main(){
    vector<int> v1(6, 0);
    v1[0]=1;
    v1[1]=2;
    v1[2]=3;

    vector<int> v2(3);
    v2[0]=2;
    v2[1]=5;
    v2[2]=6;

    int n = v2.size();
    cout<<n<<endl;
    int m = v1.size()-n;
    cout<<m<<endl;

    for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }

    cout<<endl;


    for(int i=0; i<n; i++){
        cout<<v2[i]<<" ";
    }

    cout<<endl;

    merge(v1, m, v2, n);

    for(int i=0; i<m+n; i++){
        cout<<v1[i]<<" ";
    } 
}