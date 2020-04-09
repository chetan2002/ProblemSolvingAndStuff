#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

class LL{
    Node* head;
public:
    LL(){head=nullptr;}
    void insertatend(int data){
        Node* nn=new Node(data);
        if(head==NULL){
            head=nn;
        }else{
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=nn;
        }
    }
    void insertany(int data,int pos){
        Node *nn=new Node(data);
        Node* temp = head;
        if(pos==0){
            nn->next=temp;
            head=nn;
            return;
        }


        int i;
        for(i=0;(i<pos-1) && (temp->next!=NULL);i++){
            temp=temp->next;

        }
        if(i<pos-1){
            cout<<"pos no present! appending at last!"<<endl;
        }

        nn->next=temp->next;
        temp->next=nn;
    }
    void removeany(int pos){
        Node* temp=head;
        if(head==NULL){return;}

        if(pos==0){
            head=temp->next;
            delete temp;
            return;
        }
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
            if(temp==NULL ||temp->next==NULL){
                cout<<"Invalid"<<endl;
                return;
            }

        }
        Node* temp2=temp->next;
        temp->next=temp->next->next;
        cout<<"Deleted node:"<<temp2->data<<endl;
        delete temp2;

    }

    void print(){
        Node* temp=head;
        cout<<"Start ";
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<" End"<<endl;
    }
};

class node::public Node{
public:
    node* prev;
    node(int data){
        this->prev=nullptr;
    }

};
int  main(){

    LL l1;
    l1.insertatend(23);
    l1.insertatend(534);
    l1.insertatend(3);
    l1.insertatend(54);
    l1.print();
    l1.insertany(1234,3);
    l1.insertany(124,4);
    l1.print();
    l1.insertany(24,64);
    l1.insertany(1,1);
    l1.print();
    l1.insertany(13,0);
    l1.print();
    l1.removeany(2);
    l1.print();
    l1.removeany(5);
    l1.print();
    l1.removeany(6);
    l1.print();
    l1.removeany(0);
    l1.print();
    return 0;
}
