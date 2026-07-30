    
//this is just function code

//thereis no driver code;
    // int reversePairs(vector<int>& nums) {
    //     int cnt =0;
    //     int n = nums.size();
    //     for(int i=0;i<n;i++){
    //         for (int j=i+1;j<n;j++){//brute
    //             if((long long)nums[i]>2*(long long)nums[j])cnt++;
    //         }
    //     }
    //     return cnt;
    // }
class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n  =nums.size();
       int prefix=1;
       int suffix=1;
       int ans = INT_MIN;
       for(int i=0;i<n;i++){
         if(prefix==0)prefix=1;
            if(suffix==0)suffix=1;
            prefix*=nums[i];
            suffix*=nums[n-1-i];
           
            ans=max(ans,max(prefix,suffix));
       }
       return ans;
       }
       
};