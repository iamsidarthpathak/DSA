#include<iostream>
using namespace std;
int fabo(int n){
    if(n<=1)return n;
    return fabo(n-1)+fabo(n-2);
}
int main(){
    int n;cin>>n;
    cout<<fabo(n);

    return 0;
}