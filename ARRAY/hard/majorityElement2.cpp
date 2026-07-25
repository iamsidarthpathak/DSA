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

        // vector<int>ans;
        // int m =n/3;
        // unordered_map<int, int>mpp;
        // for(int i=0;i<n ;i++){
        //     mpp[arr[i]]++;
        // }
        // for(auto x :mpp){
        //     if(x.second>m){
        //         ans.push_back(x.first);
        //         if(ans.size()==2)break;
        //     }
        // }

                //optimal approach moorey voting algorithm

        vector<int>ans;
        int m =n/3;
        
        int cnt1 =0;int cnt2 =0;
        int el1=INT_MIN;int el2=INT_MIN;
        for(int i=0;i<n ;i++){
            if (cnt1==0&&el2!=arr[i]){
                cnt1=1;
                el1=arr[i];
            }
            else if(cnt2==0&&el1!=arr[i]){
                cnt2=1;el2=arr[i];
            }
            else if(arr[i]==el1)cnt1++;
            else if(arr[i]==el2)cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;cnt2=0;
        for(int i=0;i<n ;i++){
            if(arr[i]==el1)cnt1++;
            else if(arr[i]==el2)cnt2++;
        }
        if(cnt1>m)ans.push_back(el1);
         if(cnt2>m)ans.push_back(el2);


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