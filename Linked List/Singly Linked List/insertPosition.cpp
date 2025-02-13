#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insertPosition(Node *&head,int val,int pos){
       Node *newnode=new Node(val);
       Node *tmp=head;
       for(int i=1;i<=pos-1;i++){
            tmp=tmp->next;
       }
       newnode->next=tmp->next;
       tmp->next=newnode;
}
void printLinkedlist(Node *head){
            Node *tmp=head;

            while(tmp!=NULL){
                cout<<tmp->val<<endl;
                tmp=tmp->next;
            }
 }
int main()
{
fast;
    Node* head=new Node(1);
    Node* a=new Node(2);
    Node* b=new Node(3);
    Node* c=new Node(4);
    Node* d=new Node(5);
 
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    int val,pos;
    cin>>val>>pos;
    insertPosition(head,val,pos);
    printLinkedlist(head);

get_out;
}
