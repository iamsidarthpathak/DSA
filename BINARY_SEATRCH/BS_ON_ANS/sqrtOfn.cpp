//question is we have to find the floor value of sqrt of a number 
#include<iostream>
using namespace std;
int sqrtt(int n ){
    int ans =1;
    int low =1; 
    int high = n ;
    while(low <=high){
        int mid=(low+high)/2;
        if(mid*mid<=n){
            ans = mid;
            low = mid +1;
        }
        else high = mid -1;
    }
    return ans;
}

int main(){
    int n ;cin>>n;
    int res =sqrtt(n);
    cout<<res;
}