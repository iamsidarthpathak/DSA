//hero majority elements are those which presents more than n/3 times and there can be maximium two elements
#include<bits/stdc++.h>
using namespace std;
vector<int>majorityelement(vector<int>&arr){
    int n = arr.size();
    //brute
    vector<int>ans;
    int m = n/3;
    for (int i=0;i<n ;i++){
        int cnt =0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                cnt++;
            }
            
            }if(cnt>m){
                ans.push_back(arr[i]);
        }
    }return ans;
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