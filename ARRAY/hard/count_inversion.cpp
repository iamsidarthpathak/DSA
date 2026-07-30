#include<bits/stdc++.h>
using namespace std;
// int cntInversion(vector<int>&nums){
//     int cnt=0;int n =nums.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(nums[i]>nums[j])cnt++;//(3,5,2,4) pairs would be {(3,2)(5,2)(5,4)}
//         }
//     }
//     return cnt;
// }
        //In optimal approach we will merge sort technique while merging we will count no of inversion pairs
        int  merge(vector<int>&arr,int low,int mid,int high){
    int left = low;
    vector<int>ans;
     int cnt=0;
    int right = mid+1;
    while(left<=mid&&right<=high){
        if(arr[left]<=arr[right]){
            ans.push_back(arr[left]);
            left++;

        }
        else{
            ans.push_back(arr[right]);
            cnt+=(mid-left+1);
            right++;
        }
    }
    while(left<=mid){
        ans.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        ans.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=ans[i-low];//
//ans always starts with idx 0 bt while copying we have to copy the value to arr as pper low
    }return cnt;
}
int merge_sort(vector<int> &arr,int low, int high){
    int cnt=0;
    if(low>=high)return cnt;
    int mid=(low+high)/2;
    cnt+=merge_sort(arr,low,mid);
    cnt+=merge_sort(arr,mid+1,high);
    cnt+=merge(arr,low,mid,high);
    return cnt;
}
int main(){
    int n ;cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int result=merge_sort(nums,0,n-1);
    cout<<result;
}