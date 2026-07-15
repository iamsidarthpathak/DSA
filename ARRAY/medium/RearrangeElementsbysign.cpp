//version there should be equal no +ve and -ve which means n should be positive
//they should be at alternative plances without disturbing the order of arr
//for ex [3,1,-2,-5,2,-4]
//op  [3,-2,1,-5,2,-4]
#include<bits/stdc++.h>
using namespace std;
//bruteforce approach
 //void rearrange(vector<int>&arr){
//     int n =arr.size();
//     vector<int>positive;
//     vector<int>negative;
//     for(int i=0;i<n;i++){
//         if(arr[i]<0)negative.push_back(arr[i]);
//         else{
//             positive.push_back(arr[i]);
//         }

//     }
//     for(int i=0;i<n/2;i++){
//         arr[2*i]=positive[i];
//         arr[2*i+1]=negative[i];
//     }
        
//}

        //slightly better soln
// vector<int>rearrange(vector<int>&a){
//     int n = a.size();
//     vector<int>ans(n);
//     int pveidx=0;
//     int nveidx=1;
//     for(int i=0;i<n;i++){
//         if(a[i]<0){
//             ans[nveidx]=a[i];
//             nveidx+=2;
//         }
//         else{
//             ans[pveidx]=a[i];
//             pveidx+=2;
//         }
//     }
//     return ans;


// }


        //now i'll try the question if we do not have equal no of+ve and negatives;

vector<int>rearrange(vector<int>&a){
    int n = a.size();
   
    vector<int>positive;
    vector<int>negative;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            negative.push_back(a[i]);

        }
        else{
            positive.push_back(a[i]);
        }
       
    }
    if(positive.size()>negative.size()){
        for(int i=0;i<negative.size();i++ ){
            a[2*i]=positive[i];
            a[2*i+1]=negative[i];
        }
        int idx=negative.size()*2;
        for(int i=negative.size();i<positive.size();i++){
            a[idx]=positive[i];
            idx++;
        }
    }
    else{
        for(int i=0;i<positive.size() ;i++){
        a[2*i]=positive[i];
        a[2*i+1]=negative[i];
    }
    int idx = positive.size()*2;
    for(int i=positive.size();i<negative.size();i++){
        a[idx]=negative[i];
        idx++;
    }

}
    
    return a;


}
int main(){
    vector<int>a={-1, -2, -3, 4};
    vector<int >result=rearrange(a);
    for(int i=0;i<a.size();i++){
        cout<<result[i]<<" ";

    }return 0;
}