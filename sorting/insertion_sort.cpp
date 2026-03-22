// it takes an element snd put that in its corect order
// t(c)=O(n2)
// best case O(n) [sorted arrsy]
#include<iostream>
using namespace std;
void insertion(int arr[],int n){
        for(int i=0;i<=n-1;i++){
          int j=i;
          while(j>0&&arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
          }
        
            
        }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}