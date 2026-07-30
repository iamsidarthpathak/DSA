#include<bits/stdc++.h>
using namespace std;
int cntInversion(vector<int>&nums){
    int cnt=0;int n =nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]>nums[j])cnt++;//(3,5,2,4) pairs would be {(3,2)(5,2)(5,4)}
        }
    }
    return cnt;
}
int main(){
    int n ;cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int result=cntInversion(nums);
    cout<<result;
}