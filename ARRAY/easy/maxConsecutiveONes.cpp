//there will be a binary array either contain 0 or 1
#include<bits/stdc++.h>
using namespace std;
int maxones(vector<int>&num){
    int n= num.size();
    int count =0;
    int maximumTimes =0;
    for(int i=0;i<n;i++){
        if(num[i]==1){
            count++;
            if(count>maximumTimes){
                maximumTimes=count;
            }
        }else{
            count =0;
        }

    }return maximumTimes;
}
int main(){
   
    int n;
    cin>>n;
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];

    }
    cout<<maxones(num);
    return 0;
}
