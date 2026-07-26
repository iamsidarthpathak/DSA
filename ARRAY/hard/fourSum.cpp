//four sum
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>findQuad(vector<int>&nums,int target){
    int n =nums.size();
    //brute force
    // set<vector<int>>st;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){//t(C)O(n4)
    //         for(int k =j+1;k<n;k++){
    //             for(int l =k+1;l<n;l++){
    //             long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];

    //                 if(sum==target){
    //                     vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
    //                     sort(temp.begin(),temp.end());
    //                     st.insert(temp);//s(c)=2*log(m)

    //                 }
    //             }
    //         }
    //     }
    // }

        //better approach
        set<vector<int>>result;
        for(int i=0;i<n;i++){
           
        for(int j=i+1;j<n;j++){
             unordered_set<int>st;
             for(int k =j+1;k<n;k++){
                 long long sum = (long long)nums[i] + nums[j] + nums[k] ;
                long long fourth = (long long )target-sum;
                if(st.find(fourth)!=st.end()){
                    vector<int>temp={nums[i],nums[j],nums[k],(int)fourth};
                    sort(temp.begin(),temp.end());
                    result.insert(temp);
                }
                st.insert(nums[k]);
             }
            }
        }
   vector<vector<int>>ans(result.begin(),result.end());
   return ans;
}
int main(){
    int n ;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];

    }
    vector<vector<int>>sol=findQuad(nums,0);
    for(int i=0;i<sol.size();i++){
        for(int j=0;j<sol[i].size();j++){
            cout<<sol[i][j]<<" ";

        }cout<<endl;
    }

    return 0;//nums = [1,0,-1,0,-2,2]
//target = 0
}