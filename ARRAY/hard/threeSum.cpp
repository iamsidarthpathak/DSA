//3sum


#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>findlist(vector<int>&nums,int target){
  
    int n =nums.size();
    //bruteforce
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k =j+1;k<n;k++){
                if((nums[i]+nums[j]+nums[k])==target){
                    vector<int>temp={nums[i],nums[j],nums[k]};
                   
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
      vector<vector<int>>ans(st.begin(),st.end());

    return ans;
}
int main(){
    int n ;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];

    }
    vector<vector<int>>sol=findlist(nums,0);
    for(int i=0;i<sol.size();i++){
        for(int j=0;j<sol[i].size();j++){
            cout<<sol[i][j]<<" ";

        }cout<<endl;
    }

    return 0;
}