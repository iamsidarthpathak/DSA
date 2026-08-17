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
// node *deletehead(node* head){
//     if(head==nullptr)return head;
//     node* temp = head;
//     head = head ->next;
//     free(temp);
//     return head;
// }


// node *deletetail(node *head){
//     if(head == nullptr || head->next ==nullptr )return nullptr;
//     node *temp= head;
//     while(temp->next->next!=nullptr){
//         temp = temp->next;
        
//     }
//     delete temp->next;
//     temp->next = nullptr;
//     return head;
}
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
   
    // delete head;
//   head =  deletehead(head);ṇ
//          temp = head;


   head = deletetail(head);
   temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp = temp->next ;
    }

    return 0;
}