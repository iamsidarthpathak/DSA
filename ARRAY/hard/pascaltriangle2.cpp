//In this type we have to print complete row of a pascal triangle
#include<bits/stdc++.h>
using namespace std;
// int genrateElement(int r,int c){
//     int n =r-1;
//     int k=c-1;
//     int ans=1;
//     for(int i =0 ;i<k;i++){
//         ans = ans*(n-i);//t(c)=O(k);
//         ans= ans/(i+1);
//     }

//     return ans;
// }

vector<int>genraterow(int r){
    vector<int>ans;
    //bruteforce
    // for(int i =1;i<=r;i++){
    //    int k=genrateElement(r,i);
    //    ans.push_back(k);
    // }
            //optimal
      ans.push_back(1);
      int res=1;
      for(int i=1;i<r;i++){//multiply with (row - col) and divide by col by observation and after opening the formula
        res=res*(r-i);
        res=res/i;
        ans.push_back(res);
      }      
    return ans;
}
int main(){
    int r;
    cout<<"enter row no : ";
    cin>>r;
    vector<int>sol=genraterow(r);
    for(int x : sol){
        cout<<x<<" ";
    }
    return 0;
}