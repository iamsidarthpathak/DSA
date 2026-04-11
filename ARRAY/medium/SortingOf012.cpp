#include<bits/stdc++.h>
using namespace std;
//brute force approach merge sort nlogn with usimng an extra array to  return 
//bette approach by initializing three variables and count the no of o's 1's and2's and put back to the array by sequence
//for the optimal approach will be using DUTCH NATIONAL FLAG ALGORITHM
//TO UNDERSTAND THIS 0 to lw-1 all zero
//low to mid-1 alll 1
//mid to high all of them (0,1,2) which will be unsorted
//and from high+1 to n-1 all 2 which will be again sorted

//DUTCH NATIONAL FLAG ALGORITHM
void sortarray(vector<int>&arr){
    int n= arr.size();
    int low=0;
    int mid=0;
    int high = n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;mid++;
        }
        else if(arr[mid]==1)mid++;
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    int n;cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortarray(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}