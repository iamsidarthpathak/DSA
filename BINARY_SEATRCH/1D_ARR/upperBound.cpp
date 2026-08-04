#include<bits/stdc++.h>//upperg bound means the  smalleat index whose val  is greater  to target
using namespace std;
int upperbound(vector<int>&nums,int target){
    int low=0;
    int high=nums.size()-1;
    int ans = nums.size();
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]>target){
            ans = mid;
            high = mid -1;

        }
        else low = mid+1;
        

    }
    return ans;
}
int main(){
    int n ;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];

    }
    int target;
    cin>>target;

    int res=upperbound(nums,target);
    cout<<res;

}