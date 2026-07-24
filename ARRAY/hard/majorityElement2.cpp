//hero majority elements are those which presents more than n/3 times and there can be maximium two elements
#include<bits/stdc++.h>
using namespace std;
vector<int>majorityelement(vector<int>&arr){
    int n = arr.size();
    //brute
    // vector<int>ans;
    // int m = n/3;
    // for (int i=0;i<n ;i++){
    //     int cnt =0;
    //     if(ans.size()==0||ans[0]!=arr[i]){
    //         for(int j=0;j<n;j++){
    //         if(arr[j]==arr[i]){
    //             cnt++;
    //         }
            
    //         }if(cnt>m){
    //             ans.push_back(arr[i]);
    //     }
    //     if(ans.size()==2)break;
    // }
    //     }
        //better approach by hashing

        vector<int>ans;
        int m =n/3;
        unordered_map<int, int>mpp;
        for(int i=0;i<n ;i++){
            mpp[arr[i]]++;
        }
        for(auto x :mpp){
            if(x.second>m){
                ans.push_back(x.first);
                if(ans.size()==2)break;
            }
        }
    return ans;
}

int main (){
    int n ;
    cin>>n;
    cout<<"enter the elements of the arr : ";
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>result = majorityelement(arr);
   for(int i : result){
    cout<<i<<" ";
   }
}