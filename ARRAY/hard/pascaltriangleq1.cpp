// pascal triangle looks like 
//                 1
//             1       1
//         1       2       1
//     1       3       3       1
// 1       4       6       4       1
// there are three tupes of question in pascal triangle
// here we will solve type 1 in which we will find element at specific row and column for ex 4th row 2 column and ans should be 4
//     which will be calculated as R-1
//                                     C
//                                       C-1
#include<bits/stdc++.h>
using namespace std;
int genrateElement(int r,int c){
    int n =r-1;
    int k=c-1;
    int ans=1;
    for(int i =0 ;i<k;i++){
        ans = ans*(n-i);
        ans= ans/(i+1);
    }

    return ans;
}
int main(){
    int r ;
    cout<<"Row no : ";
    cin>>r;
    int c;
    cout<<"column no : ";
    cin>>c;
    int res = genrateElement(r,c);
    cout<<"element at "<<r<<"th row and "<<c<<"th column is "<<res;
}