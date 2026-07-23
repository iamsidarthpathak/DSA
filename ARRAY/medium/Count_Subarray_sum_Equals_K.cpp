#include<bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>&nums,int k){
    int n =nums.size();
    //brute force
    // int cnt =0;
    // for(int i =0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int sum =0;
    //         for(int l=i;l<=j;l++){
    //             sum=sum+nums[l];
               
    //         } if(sum==k)
    //             cnt++;

    //     }
    // }

                //better one
    //              int cnt =0;
    // for(int i =0;i<n;i++){
    //      int sum =0;
    //     for(int j=i;j<n;j++){
    //        sum=sum+nums[j];
    //         if(sum==k)
    //             cnt++;

               
    //         } 
    //     }
            //optimal soln
            unordered_map<int,int>mpp;
            mpp[0]=1;
            int presum=0;int cnt =0;
            for(int i=0;i<n;i++){
               presum+=nums[i];
               int remaining = presum-k;
               cnt+=mpp[remaining];
               mpp[presum]+=1;
            }


        return cnt;
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
    int result = subarraySum(nums,k);
    cout<<result;
    return 0;
}