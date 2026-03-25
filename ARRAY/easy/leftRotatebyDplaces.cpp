#include<bits/stdc++.h>
using namespace std;
//bruteforce
// void left_rotate(vector<int>&arr,int d){
//     int n=arr.size();
//     vector<int>temp;
//     //first d elements pushing back to temp
//     for(int i=0;i<d;i++){
//         temp.push_back(arr[i]);

//     }
//     //shift the elements in starting
//     for(int i=d;i<n;i++){
//        arr[i-d]=arr[i];

//     }
//     //pushing the elements in array by d places

//     for(int i=d+1;i<n;i++){//time complexity O(n)
//                             //space omplexity O(n)
//         arr[i]=temp[i-d-1];
//     }

// }
//optimal approach


void left_rotate(vector<int>&arr,int d){
    reverse(arr.begin(),arr.begin()+d);//reverse array till d   t(c)=O(d)
    reverse(arr.begin()+d,arr.end());//reverse arr after d to end  t(c)=O(n-d)
    reverse(arr.begin(),arr.end());//reverse thr complete arr     t(c)=O(n)
    //total time complexity O(2n);
    //space complexity O(1);



}

int main(){
    int n ;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d ;cout<<"no of rotation : ";
    cin>>d; 
    d=d%n;   
    left_rotate(arr,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}