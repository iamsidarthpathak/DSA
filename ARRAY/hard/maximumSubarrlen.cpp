#include<bits/stdc++.h>
using namespace std;
int lensubarraySum(vector<int>&nums,int k ){
    //  int maxi = -1;
    // int subarrsize=0;
   
    // int n =nums.size();
    // for(int i=0;i<n;i++){
    //      int sum =0;
    //     for(int j =i;j<n;j++){
    //        sum+=nums[j];
    //        if(sum==k){subarrsize=j-i+1;
    //         maxi=max(maxi,subarrsize);

    //        }
            
    //     }
    // }

        // optimal one
        unordered_map<int ,int>mpp;
        int n = nums.size();
    int presum=0;
    int maxi =-1;
    mpp[0]=-1;
    int currentsize=-1;
        for(int i=0;i<n;i++){
            presum+=nums[i];
            int remaining=presum-k;
            if(mpp.find(remaining)!=mpp.end()){
                currentsize=i-mpp[remaining];
                 maxi = max(maxi , currentsize);
            }
            if(mpp.find(presum)==mpp.end()){ mpp[presum]=i;
           
            
           
            }
        }
    return maxi;
}
int main(){
    int n ;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];

    }
    cout<<"Enter summation of subarray";
    int k;
    cin>>k;
    int result = lensubarraySum(nums,k);
    cout<<result;
    return 0;
}