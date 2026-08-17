#include<bits/stdc++.h>
using namespace std;
class node {
public:
    int data;
    node* next;
node(int data){
    this->data= data;
    this->next = nullptr;
}
};
// node *inserthead(node*head,int data){
//     if(head == nullptr)return new node (data);
//     node* temp = new node (data);
//     temp->next= head;
//     return temp;
// }

// node *inserttale(node* head,int val){
//     if(head == nullptr)return new node(val);
//     node* temp = head;
//     while(temp->next!=nullptr){
//         temp=temp->next;
       
//     } node* newnode = new node (val);
//         temp->next = newnode;
//         return head;

//}

// node *insertatk(node*head,int val,int k){
//     if(head == NULL ) return NULL;
//     if(k==1){
//         node * newnode = new node(val);
//         newnode->next=head;
//         return newnode;
//     }

//         int cnt =0;
//         node*temp = head;
//         while(temp->next!=NULL){
//             cnt++;
            
//             if(cnt==k-1){
//                 node* node1 = new node (val);
//                 node1->next= temp->next;
//                 temp->next=node1;
//                 break;
//             }
//             temp=temp->next;
//         }
//         return head;
//     }


node* insertbefore(node * head,int target,int val){
    if (head == NULL){
        return NULL;

    }
    if (head->data == target){
        node *node1 = new node (val);
        node1->next = head;
        return node1;
    }
   node * temp = head;
   while(temp->next->data!=target){
    temp=temp->next;

   } 
   node * node1 = new node (val);
   node1->next = temp->next;
   temp->next = node1;
   return head;
}

int main(){
    vector<int>nums={2,5,6,9};
node* head = new node(nums[0]);
node*temp = head;
for(int i=1;i<nums.size();i++){
    node *node1 =new node (nums[i]);
    temp->next=node1;
    temp=node1;
}
//head = inserthead(head,1);

//head = inserttale(head,8);


//head= insertatk(head,5,2);

head= insertbefore(head,6,7);
temp = head;
while(temp!=nullptr){
    cout<<temp->data<<endl;
    temp=temp->next;
}
}
