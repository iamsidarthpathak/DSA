//majority element are those whichn comes more thsn n/2 time in arrqy
#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>&arr){
    // //brute force
    // int n = arr.size();
    // for(int i=0;i<n;i++){
    //     int count =0;
    //     for(int j=0;j<n;j++){
    //         if (arr[i]==arr[j])count++;
    //     }if(count>n/2){ //t(c)==O(n2)
    //         return arr[i];
    //     }
    // }
        //better soln

    // unordered_map<int, int>mpp;
    // for(int i=0;i<arr.size();i++){
    //     mpp[arr[i]]++;
    // }
    // for(auto it :mpp){//t(c)=O(n) s(c)=O(n)

    //     if (it.second>arr.size()/2){
    //         return it.first;
    //     }
    // }
       
            //OPTIMAL SOLN
            //MOOREY'S VOTING ALGORITHM
    int el; 
    int cnt=0;
    int n = arr.size();
    for(int i =0 ;i<n ;i++){
        if (cnt==0){
            el=arr[i];
            cnt =1;}
        else if(arr[i]==el)cnt++;
        else cnt--;
        
    }//to check whether the majority exist or not
    int cnt1=0;
        for(int i=0;i<n; i++){
            if(arr[i]==el)cnt1++;
            if(cnt1>n/2){
                return el;//t(c)=O(n)+O(n)(if unsured that the majority exists or not)
            }
        }


    return -1;
}
int main (){
    int n ;
    cin>>n;
    cout<<"enter the elements of the arr : ";
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = majorityElement(arr);
    if(result ==-1){
        cout<<"there is no majority element ";
    }
    else {
        cout<<result;
    }
}