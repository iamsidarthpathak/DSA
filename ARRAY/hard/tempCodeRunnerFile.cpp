#include<bits/stdc++.h>
using namespace std;
int findsubarrayxr(vector<int>&nums,int k ){
    int n = nums.size();
    //brute 
    // int cnt=0;
    // for(int i=0;i<n;i++){
    //     int xr=0;
    //     for(int j=i;j<n;j++){
    //         xr=xr^nums[j];
    //         if(xr==k)cnt++;
    //     }
    // }
    //optimal 
    unordered_map<int,int>mpp;//store prexor and frequency
    int prexr=0;
    int cnt =0;
    mpp[0]=1;
    for(int i =0;i<n;i++){
        prexr^=nums[i];//
        int target = prexr^k;//x^prexr^prexr=k^prexr
                            //x=k^prexr
        if(mpp.find(target)!=mpp.end()){
            cnt+=mpp[target];
        }mpp[prexr]++;
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
    cout<<"Enter xr of subarray";
    int k;
    cin>>k;
    int result = findsubarrayxr(nums,k);
    cout<<result;
    return 0;
}