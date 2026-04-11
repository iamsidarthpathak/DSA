#include<bits/stdc++.h>
using namespace std;
vector<int>twosum(vector<int>&arr,int target){
    int n = arr.size();
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        int required = target - arr[i];
        if(mpp.find(required)!=mpp.end()){
            return {mpp[required],i};
        }
        mpp[arr[i]]=i;
    }
    return {-1,-1};
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"target : ";
    cin>>target;
    vector<int>result=twosum(arr,target);
    cout<<result[0]<<" "<<result[1];
    

}