// //counting frequencies of array elements
// #include<iostream>
// using namespace std;
// int main(){
//     int n;cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //precompute
//     //suppose wehave elements in array max value 12 so we take hash arrsize 13
//     int hashh[13]={0};
//     for(int i=0;i<n;i++){
//         hashh[arr[i]]+=1;
    
//     }
//     int q;cin>>q;cout<<"frequencies of elements";
//     while(q--){
//         int num;
//         cin>>num;
//         //fetch
//         cout<<hashh[num]<<endl;
//     }

//     return 0;
// }


//to over come the proplem that array cant store more than 10raised to 7 no
//we ised map unorderd map for better complexity
// map=t(logn)
// unorderd map  O(1) most of the times very rarely O(n) due to collosion to understand
// collosion in division method chaining like 8 is the remainder of all 8,18,28...


//so here it is....
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
    int q;cin>>q;cout<<"frequencies of elements";
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<mpp[num]<<endl;
    }}