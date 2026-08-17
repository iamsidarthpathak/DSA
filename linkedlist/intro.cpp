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
    // node* head = new node(10);
    //  node* node2 = new node(30);
    //   node* node3 = new node(40);
    // head->next = node2;
    // node2->next = node3;
    
    // cout<<node1<<endl;
    // cout<<node1->data<<endl;;
    // cout<<node1->next;

    // traverse


    // node *temp= head;
    // while(temp!=nullptr){
    //     cout<<temp->data<<endl;
    //     temp= temp->next;

    // }

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
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp = temp->next ;
    }
    return 0;
}