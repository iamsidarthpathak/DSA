#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int low,int mid,int high){
    int left = low;
    vector<int>ans;
     
    int right = mid+1;
    while(left<=mid&&right<=high){
        if(arr[left]<=arr[right]){
            ans.push_back(arr[left]);
            left++;

        }
        else{
            ans.push_back(arr[right]);
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
    }
}
void merge_sort(vector<int> &arr,int low, int high){
    if(low>=high)return;
    int mid=(low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);

}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}  