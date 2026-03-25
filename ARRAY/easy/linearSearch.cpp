#include<bits/stdc++.h>
using namespace std;
int Lsearch(vector<int>&arr,int n,int a){
    for(int i=0;i<n;i++){
        if (arr[i]==a){
            return i;
        }
    }return -1;
}
int main(){
    int n;cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a;
    cout<<"enter the no : ";
    cin>>a;
    int idx=Lsearch(arr,n,a);
    if(idx!=-1){
        cout<< "Element "<<a<<"is found at idx "<< idx;}
    else
        cout<<"element is not found";
        
    return 0;
}