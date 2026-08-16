// //these are the questions of pattern of something like min of maax or max of min......
// // in this ques we are given the arr of stalls with their distance and we have to find max of min distance that is possible while giving stalls to n cows
// #include<bits/stdc++.h>
// using namespace std ;
// bool ispossible(vector<int>&stalls,int cows,int dist){
//     int noofcows=1;
//     int lastpos= stalls[0];
//     for(int i=1;i<stalls.size();i++){
//         if(stalls[i]-lastpos>=dist){
//             noofcows++;
//             lastpos = stalls[i];}
//             if(noofcows>=cows){
//                 return true;
            
//         }
        
//     }
//     return false;
     
// }
// int cowsArrangement(vector<int>&stalls,int cows){
//     sort(stalls.begin(),stalls.end());
//     // int n = stalls.size();
//     // int maxidist = stalls[n-1]-stalls[0];
//     // int ans = 0;
//     // for(int i=1;i<maxidist;i++){
//     //     if(ispossible(stalls,cows,i)){
//     //         ans = i;
//     //     }
//     // }
//     // return ans;
//     int n = stalls.size();
//     int low = 1;
//     int high = stalls[n-1]-stalls[0];
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(ispossible(stalls,cows,mid)){
//             low = mid +1;
//         }
//         else {
//             high = mid -1 ;
//         }
        
//     }
//     return high ;
// }
// int main(){
//     vector<int>stalls={1,2,8,4,9};
//     int cows = 3;
//     cout<<cowsArrangement(stalls,cows); 
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>m(5);
    cout<<m[1];
    m.push_back(9);
    m.push_back(8);
    cout<<m.size();
}