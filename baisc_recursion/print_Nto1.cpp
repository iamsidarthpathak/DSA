#include<iostream>
using namespace std;
void print(int i,int n){
    if(i<1)
        return;
    cout<<i<<endl;
    print(i-1,n);
}
int main(){
    int n;
    cin>>n;
    print(n,n);
    return 0;
}

//backtracking


#include<iostream>
using namespace std;
void print(int i,int n){
    if(i>n)
        return;
    
    print(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    print(1,n);
    return 0;
}