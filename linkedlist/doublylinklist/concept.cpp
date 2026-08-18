#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data ;
    node *next;
    node *back;

node(int data){
   this-> data = data ;
    this-> next = nullptr;
    this->back = nullptr;
}
node(int data1,node*next1,node*back1){
    this->data = data1;
     this->next = next1;
      this->back = back1;
}

};
int main(){
    vector<int>nums={4,11,15,25,22};
    node*head = new node (nums[0]);
    node *prev=head;
    for(int i=1;i<nums.size();i++){
        node *temp = new node (nums[i],nullptr,prev);
        prev->next = temp;
        temp->back=prev;
        prev= temp;
        cout<<temp->data<<endl;

    }
}