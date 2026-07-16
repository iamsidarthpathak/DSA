#include<bits/stdc++.h>
using namespace std;
void nex_permutation(vector<int>&arr){
// next prmutation ka mtylab h ki next shuffled value which is just larger than the current one for ex{1,3,2}ka hoga {2,1,3};
// brute force approach
// 1.find all permutation
// 2.do linear search to find the current arr
// and return the next and if it is laast the return the first one 
// ***this will take lot of complexity like (n!*n)
// }
//for b etter we can use stl in cpp

        //better
// next_permutation(arr.begin(),arr.end());


        // so we will move to optimal one
int n= arr.size();
int idx =-1;
for(int i =n-2;i>=0;i--){
    if (arr[i]<arr[i+1]){
        idx =i;
        break;//whenwver there is break means we have to find maximum matching prefix so break means at any moment the next element is larger that means that is the break point

    }

    
}
if (idx==-1) {
        reverse(arr.begin(),arr.end());
        return;
    }
for(int i=n-1;i>idx;i--){
    if(arr[i]>arr[idx]){
        swap(arr[i],arr[idx]);
        break;
    }

}
reverse(arr.begin()+idx+1,arr.end());

}
int main(){
    cout<<"Enter the size of arr: ";
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    nex_permutation(arr);
    for(int i=0;i<n;i++){
        cout<< arr[i];
       }
       return 0;
}