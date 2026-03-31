//every element in the array is present twice except one .......
#include<bits/stdc++.h>
using namespace std;
//brute first approach
// int unique_no(vector<int>&num){
//     int n = num.size();
//     for(int i=0;i<n;i++){
//         int count =0;
//         for(int j=0;j<n;j++){
//             if(num[j]==num[i])
//                 count++;

//         }
//         if(count==1)
//             return num[i];
//     }
//     return -1;
//     //t(C)=O(n2)
//     //s(c)=O(1)
// }

//better approach
//can be done using hashing bt it will create a lot of problem we have to take the  hash array of longest int given by user 
//1.find the largest element O(n)
//2.then create a hash arr of size of  maximum element 
//iterate through entire array if there is let it be lets write cide first
//  int unique_no(vector<int>&num){
//     int n = num.size();
//     int maxi=INT_MIN;
//     for(int i=0;i<n;i++){
//         maxi=max(num[i],maxi);
//     }
//     vector<int>hashh(maxi+1,0);
//     for(int i=0;i<n;i++){
//         hashh[num[i]]++;
//     }
//     for(int i=0;i<n;i++){
//         if(hashh[num[i]]==1)return num[i];
//     }
//     return -1;
//     //t(C)=O(n+maxi)
//     //s(c)=O(maxi)
//     //cant handle negatibe nos...
//  }
 

 //to over come the problems of negative numbers
 //we will use maps


//  int unique_no(vector<int>&num){
//     int n = num.size();
//      map<long long,int>mpp;
//     for(int i=0;i<n;i++){//O(n)
//         mpp[num[i]]++;
//     }
//     for(auto it :mpp){
//         if(it.second==1)return int(it.first);//log m
//     }
//     //t(c)=O(nlogm)m is size of map which (n/2+1)
//  //s(c)==O(n/2+1)
//     return 0;
 //}

    //OPTIMAL APPROACH
 //now we will be having optimized one as we know xor of same no is 0
 int unique_no(vector<int>&num){
    int n = num.size();
    int xorr =0;
    for(int i=0;i<n;i++){
        xorr=xorr^num[i];
    }
    return xorr;
 }

int main(){
   
    int n;
    cin>>n;
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];

    }
    cout<<unique_no(num);
    return 0;
}