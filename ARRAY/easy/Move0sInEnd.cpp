#include<bits/stdc++.h>
using namespace std;
// void movezeroend(vector<int>&arr){
//     int n=arr.size();
//     vector<int> temp;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             temp.push_back(arr[i]);//O(n-x)

//         }
        
//     }for(int i=temp.size();i<n;i++){//O(x)
//             temp.push_back(0);
//         }
//     for(int i=0;i<n;i++){//O(n)
//         arr[i]=temp[i];
//     }//total y(c)=O(2n);
//     //s(c)=O(n)



    
    
// }


//optimal approach
void movezeroend(vector<int>&arr){
    int n=arr.size();
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);//t(c)=O(n)
            //s(c)=O(1)
            j++;
        }
    }
}

int main(){
    int n ;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        
    movezeroend(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}