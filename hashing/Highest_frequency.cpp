
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]+=1;
    }
    int max_freq=0;
    int ans=-1;
    for(auto it:mpp){
        if(it.second>max_freq){
            max_freq=it.second;
            ans=it.first;
        }
      
    }  cout<<ans;
    
    }