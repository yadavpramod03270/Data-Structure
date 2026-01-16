
//Stack Using Linked List
#include<iostream>
using namespace std;
class stack{
    private:
    struct Node{
        int data;
        Node* next;
    };
    Node* top;
    public:
    stack(){
        top=nullptr;
    }
    void push(int x){
        Node* newNode=new Node();
        newNode->data=x;
        newNode->next=top;
        top=newNode;
    }
    void pop(){
        if(top==nullptr){
            cout<<"stack underflow"<<endl;
            return;
        }
        Node* temp=top;
        top=top->next;
        delete temp;
    
        
    }
    int peek(){
        if(top==nullptr){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }
    void display(){
        Node *temp=top;
        while(temp!=nullptr){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
};
int main() {
    stack s;
    s.push(5);
    s.push(15);
    s.push(25);
    s.pop();
    s.display();
    return 0;
}
