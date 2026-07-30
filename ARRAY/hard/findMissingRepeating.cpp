#include<bits/stdc++.h>
using namespace std;
vector<int>findMissingRepeatingNumbers(vector<int>&nums){
    //int n = nums.size();
    // int missing = -1;int repeated=-1;
    // for(int i=1;i<=n;i++){
    //     int cnt =0;
    //     for(int j=0;j<n;j++){
    //         if (nums[j]==i)cnt++;
    //     }
    //     if(cnt==2)repeated=i;
    //     else if(cnt==0)missing=i;
    //     if(repeated!=-1&&missing!=-1)break;
    // }
    // return {missing,repeated};

    //better
     int missing = -1;int repeated=-1;
    // vector<int>hash(n+1);
    // for(int i=0;i<n;i++){
    //     hash[nums[i]]++;
    // }
    // for(int i=1;i<n;i++){
    //     if(hash[i]==2)repeated=i;
    //     else if(hash[i]==0)missing=i;
    //      if(repeated!=-1&&missing!=-1)break;
    // }
        //optimal 
            long long n = nums.size();

        long long sn1= (n*(n+1))/2;//sum of n num
        long long sn2= (n * (n + 1) * (2 * n + 1)) / 6;
         long long s1=0;long long s2=0;
        for(int i=0;i<n;i++){
            s1+=(long long)nums[i];
            s2+=(long long)nums[i]*(long long)nums[i];
        }
        long long val1 =sn1-s1;//x-y
        long long val2=sn2-s2;//x2-y2=(x+y)(x-y)
        val2 = val2/val1;
        long long x =(val1+val2)/2;
        long long y=x-val1;
        return {(int)x,(int(y))};

     return {missing,repeated};
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>result=findMissingRepeatingNumbers(nums);
    cout<<"miising no is "<<result[0]<<" repeated no is "<<result[1];
}