#include<bits/stdc++.h>
using namespace std;
int second_largest(vector<int>&arr,int n){
    if (n<=1)return -1;
    int largest = arr[0];
    int smax=INT_MIN;
    for (int i=0 ;i<n; i++){
        if (arr[i]>largest){
            smax=largest;
            largest=arr[i];
        }
        else if(arr[i]>smax&&arr[i]!=largest){
            smax=arr[i];
        }
    }
    if(smax==INT_MIN)return -1;
    return smax;
}
int main(){
    int n;cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<second_largest(arr,n);
    return 0;
}

//t(complexity)=O(n)