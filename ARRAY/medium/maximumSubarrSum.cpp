#include<bits/stdc++.h>
using namespace std;
int maxsum(vector<int>&arr){
    int n = arr.size();
    //bruteforce
    // int maxi = INT_MIN;
    
    // for(int i=0;i<n;i++){
    //     int sum =0;
    //     for(int j=i;j<n;j++){
    //         sum+=arr[j];
    //         maxi = max(maxi ,sum);
    //     }
    //};

        //OPTIMAL APPROACH KADANES ALGORITHM.....
    int maxi = INT_MIN;
    int sum =0;
    int startidx;
    int endidx;
    int start =0;

    for(int i=0;i<n;i++){
        if(sum<0) start =i;
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            startidx=start;
            endidx=i;
        }
        if(sum<0){
            sum =0;
        }
        
    }
    for(int i=startidx;i<=endidx;i++){
        cout<<arr[i]<<" ";
    }

    return maxi;
}
int main (){
    int n ;
    cin>>n;
    cout<<"enter the elements of the arr : ";
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = maxsum(arr);
    
        cout<<result;
    
}