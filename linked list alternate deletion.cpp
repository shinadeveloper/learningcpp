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

void deletealternate(Node* head){
     
    Node* second=head;
    while(second!=NULL and second->next!=NULL){
        Node* temp=second->next;
        second->next=second->next->next;
        second=second->next;
        delete temp;
    }
}
int main(){
     Node* n = new Node(4);
    display(n);
    insertathead(n,3);
    insertathead(n,2);
    insertathead(n,1);
    display(n);
    insertattail(n,5);
    display(n);
    insertatk(n,3,4);
    display(n);
    insertatk(n,4,6);
    display(n);
    insertatk(n,4,8);
    display(n);
    updateatk(n,56,4);
    display(n);
    deletealternate(n);
    display(n);
}