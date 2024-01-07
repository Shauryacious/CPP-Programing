#include<iostream>
#include<vector>
using namespace std;
//int removeDuplicates(vector<int>& nums) {
    //int n=nums.size(), count=0;

    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(nums[i]==nums[j]){
    //             for(int k=j; k<n; k++){
    //                 nums[k]=nums[k+1];
    //             }

    //             count++;
    //         }
    //     }
    //     int k = n-count;
        //return k;
    //}
//}
int main(){
    vector<int> nums(11);
    nums[0]=0;
    nums[1]=0;
    nums[2]=0;
    nums[3]=1;
    nums[4]=1;
    nums[5]=1;
    nums[6]=2;
    nums[7]=2;
    nums[8]=3;
    nums[9]=3;
    nums[10]=4;

    int n=nums.size(), count=0;

    cout<<nums[11]<<endl;
    cout<<nums[12]<<endl;

    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    // int x = removeDuplicates(v);
    // cout<<x;
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i]==nums[j]){
                for(int k=j; k<n; k++){
                    nums[k]=nums[k+1];
                }
                if(nums[i]==nums[j]){
                    for(int k=j; k<n; k++){
                        nums[k]=nums[k+1];
                    }
                    if(nums[i]==nums[j]){
                        for(int k=j; k<n; k++){
                            nums[k]=nums[k+1];
                        }
                    }
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int k=n-count;
    cout<<k;
}