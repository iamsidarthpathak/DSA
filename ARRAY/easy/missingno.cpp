#include<bits/stdc++.h>

using namespace std;
int missingno(vector<int>&num){
    int n=num.size();
    int total_sum=((n+1)*(n+2))/2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=num[i];

    }
    return total_sum-sum;
}
int main(){
    int n;
    cin>>n;
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];

    }
    cout<<missingno(num);
    return 0;
}