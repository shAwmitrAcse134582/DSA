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

void insertTail(Node *&head,Node *&tail,int val){
    Node *newNode=new Node(val);
         
     if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
     }
     tail->next=newNode;
     tail=newNode;
}

void reverseLinkedList(Node *&head){
    if(head==NULL){
        return;
    }
    reverseLinkedList(head->next);
    cout<<head->val<<endl;
}

 int size(Node *&head){
      Node *tmp=head;
      int cnt=0;
      while(tmp!=NULL){
        tmp=tmp->next;
        cnt++;
      }
      return cnt;
 }

int main()
{
fast;
    Node *head=NULL;
    Node *tail=NULL;

    while(true){
        int val;
        cin>>val;
        if(val==-1){
          break;
        }
        else{
          insertTail(head,tail,val);
        }

    }
       reverseLinkedList(head);
  
     

get_out;
}
