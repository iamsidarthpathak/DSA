#include<bits/stdc++.h>
using namespace std;
int  buyAndSell(int arr[],int n){
   
    int mini =arr[0];
    int maxprofit=0;
    for(int i=1;i<n;i++){
        int profit = arr[i]-mini;
        maxprofit=max(profit,maxprofit);
        mini = min(mini,arr[i]);
    }
    return maxprofit;
}
int main(){
    int arr[6]={7,1,5,3,6,4};//idx represent days and its value represents cost og stock on that day we have maximise the profit with buy & sel
    cout<<buyAndSell(arr,6);
    
}