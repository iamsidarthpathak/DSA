//In this type we will genrate pascal triangle for size n
#include<bits/stdc++.h>
using namespace std;
vector<int>genraterow(int r){
    vector<int>result;
    result.push_back(1);
        int ans=1;
    for(int i=1;i<r;i++){
        ans=ans*(r-i);
        ans=ans/i;
        result.push_back(ans);
    }
    return result;
}
vector<vector<int>>genratepascal(int n){
    vector<vector<int>>ans;
        for(int i = 1;i<=n;i++){
            ans.push_back(genraterow(i));
        }
        return ans;
}
int main(){
    int n ;
    cout<<"No of rows : ";
    cin>>n;
    vector<vector<int>>sol=genratepascal(n);
    for(int i=0;i<sol.size();i++){
        for(int j=0;j<sol[i].size();j++){
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;

    }
    
}