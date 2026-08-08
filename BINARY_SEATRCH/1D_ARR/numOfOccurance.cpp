#include<bits/stdc++.h>
using namespace std;
int phlaidx(vector<int>&nums,int target){
    int n = nums.size();
    int low = 0;
    int high = n-1;
    int res = -1;
    while(low <= high ){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            res = mid;
            high = mid-1;
        }
        else if(nums[mid]>target){
            high = mid-1;
        }
        else {
            low= mid +1;
        }
    }
    return res;
}
int antimidx(vector<int>&nums,int target){
    int n = nums.size();
    int low = 0;
    int high = n-1;
    int res1 = -1;
    while(low <= high ){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            res1 = mid;
            low= mid +1;
        }
        else if(nums[mid]>target){
            high = mid-1;
        }
        else {
            low= mid +1;
        }
    }
    return res1;
}
    int main(){
    vector<int>nums = {4,7,7,9,9,9,9,9,15};
    int target =9;
    int firstIdx = phlaidx(nums,target);
    if(firstIdx==-1){cout<<0;
    return 0;
    }
    int lastIdx = antimidx(nums,target);
    cout<< (lastIdx-firstIdx)+1;
    return 0;
}