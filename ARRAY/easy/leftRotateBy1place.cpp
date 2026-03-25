//here we left rotate array by 1 place for ex :1,6,4,5,2 then resultant will be 6,4,5,2,1
//t(c)=O(n);
//s(c)=O(1);
#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int>&arr){
    int n= arr.size();
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
int main(){
    int n ;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotate(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}