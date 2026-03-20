#include<iostream>
using namespace std;

int summation( int n,int sum ){
   
    if(n<1){
        return sum;
    }
   
    return summation(n-1,sum+n);
    
}


int main(){
    int n;
    cin>>n;
    int result= summation(n,0);//PARAMETERIZED WAY
    cout<<result;
    return 0;
}


//NON PARAMETIZED WAY


#include<iostream>
using namespace std;

int summation( int n ){
   
    if(n==1){
        return 1;
    }
   
    return n+summation(n-1);
    
}


int main(){
    int n;
    cin>>n;
    int result= summation(n);// NON PARAMETERIZED WAY
    cout<<result;
    return 0;
}

