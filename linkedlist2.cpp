//warning!!!!!!!!!!!!!!!!!!
//this code doesnt work as expected

#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=NULL;
    }
};
void insertathead(Node* &head,int data){
    Node* newnode=new Node(data);
    newnode->next=head;
    head= newnode;
}
void insertattail(Node* &head,int data){
    Node* newnode=new Node(data);
    Node* temp=head;
    while(temp->next!=NULL){
        temp= temp->next;
    }
    temp->next=newnode;
}
void insertatk(Node* &head,int data,int pos){
    Node* newnode=new Node(data);
    Node* temp=head;
    int k=1;
    while(k<(pos-1)){
        temp=temp->next;
        k++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void updateatk(Node* &head,int data,int pos){
    
    Node* temp=head;
    int k=1;
    while(k<pos){
        temp=temp->next;
        k++;
    }
    temp->val=data;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
void deleteathead(Node* &head){
    if (head==NULL) return;
    Node* temp=head;
    head=head->next;
    free(temp);
}
void deleteattail(Node* &head){
    if (head==NULL) return;
    Node* temp=head;
    Node* last;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    last=temp->next;
    temp->next=NULL;
    free(last);
}
void deleteatk(Node* &head,int pos){
    if (head==NULL) return;
    if (pos==1){
          deleteathead(head);
          return;
    }
    Node* temp=head;
    Node* del;
    int k=1;
    while(k<(pos-2)){
        temp=temp->next;
    }
    if (temp==NULL) return;
    if (temp->next==NULL) return;
    if(temp->next->next ==NULL){
        deleteattail(head);
        return;
    }
    del=temp->next;
    temp->next=temp->next->next;;
    free(del);
}
int main(){
    Node* n = new Node(4);
    // display(n);
    insertathead(n,3);
    insertathead(n,2);
    insertathead(n,1);
    display(n);
    // deleteathead(n);
    // display(n);
    // deleteattail(n);
    // display(n);
    deleteatk(n,4);
    display(n);
}
//warning!!!!!!!!!!!!!!!!!!
//this code doesnt work as expected