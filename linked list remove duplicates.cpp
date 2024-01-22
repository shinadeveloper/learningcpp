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
void rmeoveduplicate(Node* head){
    Node* temp=head;
    Node* after=head->next;
    Node* prev=head;
    while(after!=NULL){
        temp=after;
        after=after->next;
        if(prev->val==temp->val){
            prev->next=after;
            free(temp);
        }
        else{
            prev=prev->next;
        }
    }
    display(head);
}
int main(){
    Node* n=new Node(1);
    insertattail(n,1);
    insertattail(n,2);
    insertattail(n,2);
    insertattail(n,3);
    insertattail(n,3);
    insertattail(n,4);
    insertattail(n,5);
    insertattail(n,6);
    insertattail(n,6);
    display(n);
    rmeoveduplicate(n);

}