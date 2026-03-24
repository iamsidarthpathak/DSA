#include<bits/stdc++.h>
using namespace std;
int largest_integer(vector<int>&arr,int n){
    int largest = arr[0];
    for (int i=0 ;i<n; i++){
        if (arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
    int n;cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largest_integer(arr,n);
    return 0;
}
//time complexity O(n)
brute force me phle sort kro fir last element ko access kr lo 
t(c)=O(nlogn)
//ha ek aur approach ho skta h jaise  
//int largest = *max_element(arr.begin(), arr.end()); ye stl function h 