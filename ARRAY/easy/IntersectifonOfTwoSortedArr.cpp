#include<bits/stdc++.h>
using namespace std;
// vector<int>intersection(vector<int>&a,vector<int>&b,int m,int n){
//     vector<int>result;
//     int visited[n]={0};
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(a[i]==b[j]&&visited[j]==0){
//                 result.push_back(a[i]);
//                 visited[j]=1;
//                 break;
//             }
//             if(a[i]<b[j])break;
//         }
//     }
//     return result;

//     //t(c)=O(m*m)
//     //s(c)=O(n)


// }

//optimal approach
vector<int>intersection(vector<int>&a,vector<int>&b,int m ,int n){
    vector<int>result;
    
    int i=0;
    int j=0;
    while(i<m&&j<n){
        if(a[i]<b[j])i++;
        else if(a[i]>b[j])j++;
        else{
            result.push_back(a[i]);
            i++;j++;
        }
    }
    return result;
//t(c)=O(m+n)
//s(c)==O(1)
}

int main(){
    
    int m;
    cout<<"size of first array : ";
    cin>>m;
    vector<int>a(m);
    cout<<"enter the elements first aaray and the array should be sorted ";
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<"size of second array : ";
    int n;
    cin>>n;
    vector<int>b(n);
    cout<<"enter the elements second aaray and the array should be sorted ";
    for(int i=0;i<n;i++){
        cin>>b[i];}
    vector<int>answer=intersection(a,b,m,n);
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
    return 0;

}