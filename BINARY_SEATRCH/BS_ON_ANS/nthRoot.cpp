// Problem Statement: Given two numbers N and M, find the Nth root of M. The nth root of a number M is defined as a number X when raised to the power N equals M. If the 'nth root is not an integer, return -1.
#include<iostream>
using namespace std ;
int power (int base ,int power){
    int product = 1;
    for(int i=1;i<=power;i++){
        product = product*base;
    }
    return product;
}
int sqrtt(int m , int n ){
    
    int low =1 ;int high = m ;
    while(low<=high){
        int mid = (low+high )/2;
        if (power(mid,n)==m ){
            return mid;
        }
        else if(power(mid,n)>m){
          high = mid -1;
        }
        else low = mid +1;
    }
    return -1 ;
}

int main(){
    int m;
    cout<<"enter the integer of which you want to root : ";
    cin>>m;
    int n ;
    cout<<"enter the nth root: ";
    cin>>n;
    int res = sqrtt(m,n);
    cout<<res;
    return 0;
}
