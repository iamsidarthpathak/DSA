//3sum


#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>findlist(vector<int>&nums,int target){
  
    int n =nums.size();
    //bruteforce
    // set<vector<int>>st;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         for(int k =j+1;k<n;k++){
    //             if((nums[i]+nums[j]+nums[k])==target){
    //                 vector<int>temp={nums[i],nums[j],nums[k]};
                   
    //                 sort(temp.begin(),temp.end());//t(c)=O(n3logm)=(n3)
    //                 st.insert(temp);//s(c)=O(m)+(m)=O(m)
    //             }
    //         }
    //     }
    // }
    //   vector<vector<int>>ans(st.begin(),st.end());
            //better approach
        set<vector<int>>res;
        for(int i=0;i<n;i++){
            unordered_set<int>st;//t(c)=O(n2log(m))
            for(int j=i+1;j<n;j++){//s(C)=O(n+m+m)
                int third=target-(nums[i]+nums[j]);
                if(st.find(third)!=st.end()){
                    vector<int>temp={nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    res.insert(temp);
                }
                st.insert(nums[j]);
            }
        }
            vector<vector<int>>ans(res.begin(),res.end());

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