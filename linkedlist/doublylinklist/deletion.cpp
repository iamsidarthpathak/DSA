#include<bits/stdc++.h>
using namespace std;
class node {
public:
    int data ;
    node * next;
    node *back;
node (int data1){
    this->data=data1;
    this->next = nullptr;
    this->back = nullptr;
}
node(int data1,node* next1,node *back1){
    this->data=data1;
    this->next = next1;
    this->back = back1;
}

};
// node* deletehead(node *head){
//     if(head ==0)return 0;
//     if(head->next==0){
//         delete head ;
//         return NULL;
//     }
//     node * temp= head;
//     head = head ->next;
//     head ->back = NULL;
//     temp->next = NULL;
//     delete temp;
//     return head;
    
// }

// node * deletetail(node *head){
//     if(head==nullptr)return 0;
//     if (head->next ==NULL){
//         delete head ;
//         return nullptr;
//     }
//     node * temp = head;
//     while(temp->next->next !=NULL){
//         temp = temp->next;
        
//     }
//      temp->next = nullptr;
//         return head;
// }

node *deleteAtk(node * head ,int k){
    node *temp = head;
    int cnt =0;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k)break;
        temp = temp->next;

    }
    node *front= temp->next;
    node *prev= temp->back;
    if(front==NULL&&prev ==NULL){
        delete head ;
        return nullptr;
    }
    else if(front==nullptr&&prev!=nullptr){
        prev->next=nullptr;
        delete temp;
        return head;
    }
    else if(prev==nullptr && front !=nullptr){
        front->back==nullptr;
        delete temp;
        return front;
    }
    else {
        front ->back = prev;
        prev->next = front ;
        delete temp;
        return head;
    }
   return head;
    
}
int main(){
    vector<int>nums={2,5,6,9,8};
    node * head = new node (nums[0]);
    node *prev = head;
    for(int i=1;i<nums.size();i++){
        node * temp = new node (nums[i]);
        prev->next= temp;
        temp->back= prev;
        prev = temp;
    }

    //head = deletehead(head);
    //head = deletetail(head);

    head = deleteAtk(head,7);
    node *temp=head;
    while(temp!=0){
        cout<<temp->data<<endl;
        temp = temp->next;
    }

}
