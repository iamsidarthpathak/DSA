#include<bits/stdc++.h>
using namespace std;
// bool issorted(vector<int>&arr,int n){
// //brute force approach time complexity O(n2)
//      for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             if(arr[j]<arr[i])
//                 return false;
//         }
//      }return true;
// }
bool issorted(vector<int>&arr,int n){
//optimal approach time complexity O(n)
     for(int i=1;i<n;i++){
       if(arr[i]<arr[i-1])return false;
        }
        return true;
     }

int main(){
    int n;cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<issorted(arr,n);
    return 0;
}
