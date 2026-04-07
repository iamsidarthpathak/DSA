//here we have to find longest subarray with sum k 

#include<bits/stdc++.h>
using namespace std;
// //brute force
// int longestsubarray(vector<int>&arr,int k){
//     int n=arr.size();
//     int length =0;
//     for(int i=0;i<n;i++){
//         int sum =0;
//         for(int j=i;j<n;j++){
//             sum =sum+arr[j];
//             if(sum==k){//O(n2)
//                 //O(1)
//                 length = max(length,j-i+1);
//             }
//         }
//     }
//     return length;
//}

//better solution for the zeroes and positives
//but optimal solution if we include negatives


//  int longestsubarray(vector<int>&arr,int k){
//     int n = arr.size();
//     int mlength=0;
//     int sum =0;
//     map<int,int>presum;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//         if (sum==k){
//             mlength=i+1;
//         }
//         int rem =sum-k;
//     if(presum.find(rem)!=presum.end()){
//         int length=i-presum[rem];
//         mlength=max(mlength ,length);
//     }
//     if(presum.find(sum)==presum.end()){
//         presum[sum]=i;
//     }
//     //t(c)=O(nlogn)
//     //s(c)=O(n)
//     }
//     
  //  return mlength;
 //}
    //just for the positives and zeroes we have an optimal solution......
    int longestsubarray(vector<int>&arr,int k){
        int n= arr.size();
        int maxlength=0;
        int sum =arr[0];
        int left =0;
        int right =0;
        while(right<n){
            while(left<=right&&sum>k){
                sum-=arr[left];
                left++;
            }
            if(sum==k){
                    maxlength=max(maxlength,right-left+1);
            }
            right++;
            if(right<n)
                sum+=arr[right];
        }



        return maxlength;
    }






int main(){
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the summation value : ";
    cin>>k;
    int l = longestsubarray(arr,k);
    cout<<"length of lomgest subarray with summation "<<k<<" is "<<l ;

    return 0;
} 