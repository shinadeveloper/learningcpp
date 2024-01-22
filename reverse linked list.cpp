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

void reverse(Node* &head){
    Node* temp=head;
    Node* prev=NULL;
    Node* after=head->next;
    while(temp!=NULL){
        temp->next=prev;
        prev=temp;
        temp=after;
       if(after != NULL) after=after->next;
    }
    head=prev;
    display(head);
}
void reverserecursively(Node* &head){
    Node* curr;
    if (curr==NULL) return;
    Node* temp=NULL;
    
}
int main(){
    Node* n=new Node(5);
    insertathead(n,4);
    insertathead(n,3);
    insertathead(n,2);
    insertathead(n,1);
    display(n);
    reverse(n);
 

}