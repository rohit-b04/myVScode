#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node {

public:
    int data, count = 0;
    node* mover;
    class node* next;
    node(int data1, node* mover1) {
        data = data1;
        mover = mover1;
    }
    node(int data2) {
        data = data2;
        mover = nullptr;
    }
    node(){}
    
};

node *head=NULL;

void accept() {
    int data, ch;
    
    do{
        cout << "Enter: ";
        
        cin >> data;
        node* nextnode = new node(data);
        if(head == NULL) head = nextnode;
        else {
            node* temp;
            temp = head;
            while(temp -> mover != NULL) {
                temp = temp->mover;
            }
            temp -> mover = nextnode;
        }
        
        cout << "Do you want to continue?(1/0) ";
        cin >> ch;
        
    }while(ch == 1);
}

void search() {
    
}

void display() {
    node* move = head;
    
    while(move != NULL) {
        cout << move->data << " ";
        move = move->mover;
    }
}

int main() {

    node y;
    accept();
    display();
    
    //cout << (*head).data << " is equal to " << head->data << endl;
    //cout << head;           
    return 0;
}