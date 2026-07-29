#include<bits/stdc++.h>
using namespace std;
vector<int>findMissingRepeatingNumbers(vector<int>&nums){
    int n = nums.size();
    int missing = -1;int repeated=-1;
    for(int i=1;i<=n;i++){
        int cnt =0;
        for(int j=0;j<n;j++){
            if (nums[j]==i)cnt++;
        }
        if(cnt==2)repeated=i;
        else if(cnt==0)missing=i;
        if(repeated!=-1&&missing!=-1)break;
    }
    return {missing,repeated};
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>result=findMissingRepeatingNumbers(nums);
    cout<<"miising no is "<<result[0]<<" repeated no is "<<result[1];
}