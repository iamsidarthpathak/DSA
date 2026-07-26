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


        // set<vector<int>>res;
        // for(int i=0;i<n;i++){
        //     unordered_set<int>st;//t(c)=O(n2log(m))
        //     for(int j=i+1;j<n;j++){//s(C)=O(n+m+m)
        //         int third=target-(nums[i]+nums[j]);
        //         if(st.find(third)!=st.end()){
        //             vector<int>temp={nums[i],nums[j],third};
        //             sort(temp.begin(),temp.end());
        //             res.insert(temp);
        //         }
        //         st.insert(nums[j]);
        //     }
        // }
        //     vector<vector<int>>ans(res.begin(),res.end());

            //optimal approach
        //we will be using two pinter approach or may be 3 pointer
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        if(i>0&&nums[i-1]==nums[i])continue;
        int j =i+1;
        int k=n-1;//t(c)=O(nlogn+n2)
        //sc=O(m)to return the answer not to solve the prblem
        while (j<k){
            if((nums[i]+nums[j]+nums[k])<target){
                j++;
            }
            else if((nums[i]+nums[j]+nums[k])>target){
                k--;
            }
            else{
               ans.push_back({nums[i],nums[j],nums[k]});
                j++;
                k--;
                while(j<k&&nums[j]==nums[j-1])j++;
                while(j<k&&nums[k]==nums[k+1])k--;
            }

        }
    }

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