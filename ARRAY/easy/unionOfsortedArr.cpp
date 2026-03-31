#include<bits/stdc++.h>
using namespace std;
// vector<int>unionofarr(vector <int>arr1,vector <int>arr2,int m ,int n){
//     //brute force approach
//     //t(c)=O((m+n) log(m+n)) ==logm+log n to insert 
//     //s(c)=O(m+n)+O(m+n)  //2nd m+n is used to return the answer not in solving the problem......
//     vector<int>result;
//     set<int>s;
//     for(int i=0;i<m;i++){
//         s.insert(arr1[i]);

//     }

//      for(int i=0;i<n;i++){
//         s.insert(arr2[i]);
        
//     }
    
//     for(auto it:s){
//         result.push_back(it);
//     }
    
//     return result;
//     }




    //optimal approach
    vector<int>unionofarr(vector <int>arr1,vector <int>arr2,int m ,int n){
    vector<int> result;
    int i=0;
    int j=0;
    while(i<m&&j<n){
        if(arr1[i]<=arr2[j]){
            if(result.size()==0||result.back()!=arr1[i]){
                result.push_back(arr1[i]);
                
            }i++;
        }
        else{
            if(result.size()==0||result.back()!=arr2[j]){
                result.push_back(arr2[j]);
                
            }j++;
        }
    }
    while(j<n){
        if(result.size()==0||result.back()!=arr2[j]){
                result.push_back(arr2[j]);
                
            }j++;
    }
    while(i<m){
       if(result.size()==0||result.back()!=arr1[i]){
                result.push_back(arr1[i]);
                
            } i++;
    }

    return result;

    }//t(c)=O(m+n)
    //s(c)=O(m+n) m+n is used to return the answer not in solving the problem..
int main(){
    
    int m;
    cout<<"size of first array : ";
    cin>>m;
    vector<int>arr1(m);
    cout<<"enter the elements first aaray and the array should be sorted ";
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    cout<<"size of second array : ";
    int n;
    cin>>n;
    vector<int>arr2(n);
    cout<<"enter the elements second aaray and the array should be sorted ";
    for(int i=0;i<n;i++){
        cin>>arr2[i];}
    vector<int>answer=unionofarr(arr1,arr2,m,n);
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
    return 0;
}