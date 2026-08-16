#include<bits/stdc++.h>//ceil are basically lb because it is the element just larger or equal and floor are just smaller or equal
using namespace std;
int findfloor(vector<int>&nums,int target){
    int n = nums.size();
    int ans =-1;
    int low =0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(nums[mid]<=target){
            ans = nums[mid];
            low = mid+1;
        }
        else high = mid-1;
    }
    return ans;
}class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // for(int i =0;i<arr.size();i++){
        //     if(arr[i]<=k)k++;
        //     else {
        //         break;
        //     }
        //     }
        //     return k;

        int low =0;
        int n = arr.size();
        int high = n - 1;
        while (low<=high){
            int mid = (low +high)/2;
            int missing = arr[mid]-(mid+1);
            if (missing <k)low = mid+1;
            else high = mid -1;

        }
        return low + k;
    }
};
int findciel(vector<int>&nums,int target){
    int ans =-1;
    int low=0;
    int high=nums.size()-1;
    
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]>=target){
            ans = nums[mid];
            high = mid -1;

        }
        else low = mid+1;
        

    }
    return ans;
}

pair<int,int> findfloorandciel(vector<int>&nums,int target){
    int x =findfloor(nums,target);
    int y = findciel(nums,target);
    return make_pair(x,y);

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
    pair<int,int>ans = findfloorandciel(nums,target);

   
    cout<<ans.first<<" "<<ans.second;


}