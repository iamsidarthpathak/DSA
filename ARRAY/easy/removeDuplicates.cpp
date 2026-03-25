#include<bits/stdc++.h>
using namespace std;
// int removedup(vector<int>&arr){
//     int n=arr.size();
//     //brute force approach
//     unordered_set<int>s;
//     for(int i=0;i<n; i++){//nlogn
//         s.insert(arr[i]);
//     }
//     int i=0;
//     for(auto it:s){
//         arr[i++]=it;
//     }
//         return s.size();
        //t(c)=nlogn
    //s(c)=O(n)
    //unorder set thats why it is not soreted 
    //for sorted arr we have better approach
   // }
    int removedup(vector<int>&arr){
        int i=0;
        for(int j=i;j<arr.size();j++){
            if(arr[j]!=arr[i]){
                arr[i+1]=arr[j];
                i++;
            }
        }return i+1;
    }

    //optimaal approach 
    //TWO POINTER APPROACH
    //ARRAY ALWAYS SORTED........
      



int main(){

    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int newSize=removedup(arr);
    
   for(int i=0;i<newSize;i++){
        cout<<arr[i]<<" ";
    } 


    return 0;
}