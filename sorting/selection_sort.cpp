//select the minimum and put it firsy basically swap to the first thus one element 
//being sorted every time
//basically the algo says get the minimum amd swap 
//time complexity O(n2)in all cases n sqaure...
#include<iostream>
using namespace std;
void selection(int arr[],int n){
        for(int i=0;i<=n-2;i++){
            int min =i;
            for(int j=i;j<=n-1;j++){
                if(arr[j]<arr[min]){
                    min=j;
                }
            }
            swap(arr[min],arr[i]);
        }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}