#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data ;
    node *next;

node(int data){
   this-> data = data ;
    this-> next = nullptr;
}

};
int main(){
   
    // we have vector and want to convert the into inkedlist
    vector<int>nums={2,5,8,9,13};
    node *head= new node (nums[0]);
    node *temp= head;
    for(int i=1;i<nums.size();i++){
        node *newnode = new node(nums[i]);
        temp->next = newnode;
        temp = newnode;
    }
    temp = head;
    int cnt =0;
    while(temp!=nullptr){
        cnt++;
        temp = temp->next ;
    }
    cout<<cnt;
    return 0;
}