//leaders are thosee elements which are greater than all its element on RHS
//last element will always be leader...
#include<bits/stdc++.h>
using namespace std;
vector<int>find_leaders(vector<int>&arr){
    vector<int>ans;
    int n =arr.size();
    // //brute force

    // for(int i=0;i<n;i++){
    //     bool ld =true;
    //     for(int j =i+1;j<n;j++){
    //         if(arr[j]>=arr[i]){
    //             ld=false;
    //             break;
    //         }
    //     }
    //     if(ld==true){
    //         ans.push_back(arr[i]);
            
    //     }
        
    // }
    // return ans;

        //optimal one
        int maxi=INT_MIN;
        for(int i=n-1;i>=0;i++){
            
            if(arr[i]>maxi){
                ans.push_back(arr[i]);
            }
            maxi=max(maxi,arr[i]);



        }reverse(ans.begin(), ans.end());
        return ans;

}
int main(){
    cout<<"Enter the size of arr: ";
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    vector<int>sol=find_leaders(arr);
    for(int i=0;i<sol.size();i++){
        cout<< sol[i]<<" ";
       }
       return 0;
    }