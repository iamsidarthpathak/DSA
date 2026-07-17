
#include<bits/stdc++.h>
using namespace std;
// bool ls(vector<int>&arr,int x) {
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]==x)return true;
//     }
//     return false;

// }
int long_cons_seq(vector<int>&arr){
    //bruteforce
    // int n = arr.size();
    //      int longestcons=1;
    // for(int i =0;i<n;i++){
    //     int cnt=1;
    //     int x = arr[i];
    //     while(ls(arr,x+1)==true){
    //         x=x+1;
    //         cnt++;
    //         longestcons=max(cnt,longestcons);
    //     }


        //better soln


    //   int n = arr.size();
    //     int longestcons=1;
    //     int cnt =0;
    //     int lastone = INT_MIN;
    //     sort(arr.begin(),arr.end());
    //     for(int i=0;i<n ;i++){
    //         if(arr[i]-1==lastone){
    //             cnt++;
    //             lastone=arr[i];
    //         }
    //         else if(arr[i]!=lastone){
    //             cnt =1;
    //             lastone=arr[i];
    //         }
    //          longestcons=max(cnt,longestcons);
    //     }
       
            //OPTIMAL SOLUTION
            int n = arr.size();
            int longestcons=1;
           
            unordered_set<int>st;
            for(int i=0;i<n;i++){
                st.insert(arr[i]);
            }
            for(auto it:st){
                if(st.find(it-1)==st.end()){
                   int cnt =1;
                   int x = it;
                   while(st.find(x+1)!=st.end()){
                    x=x+1;
                    cnt++;
                   }longestcons=max(cnt,longestcons);
                }
            }

    return longestcons;

    }
    
int main(){
    cout<<"Enter the size of arr: ";
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int ans=long_cons_seq(arr);
    cout<<ans;
       return 0;
    }