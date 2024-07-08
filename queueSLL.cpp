#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class MyQueue {
    public:
    int sz=0;
    Node* head=NULL;
    Node* tail=NULL;

    void push(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            sz++;
            return;
        }
        tail->next=newNode;
        tail=newNode;
        sz++;
    }
    void pop(){
        // stack zodi khali thake tahole head NULL hobe, ar zokhon NULL er next access korte zabe tokhon error dibe. tahole pop function call korar somoy check korte hobe stack khali kina.
        head=head->next;
        if(head==NULL){
            tail=NULL;
            sz--;
            return;
        }
        sz--;
    }
    int top(){
        // stack zodi khali thake tahole head NULL hobe, ar zokhon NULL er val access korte zabe tokhon error dibe. tahole top access korar somoy check korte hobe stack khali kina. 
        return head->val;
    }
    int size(){
        if(sz<=0) return 0;
        else return sz;
    }

    bool empty(){
        if(sz<=0) return true;
        else return false;
    }
};
int main(){
    MyQueue que;
    int s;
    cin>>s;
    while(s--){
        int x;
        cin>>x;
        que.push(x);
    }
    cout<<que.size()<<endl;
    while(!que.empty()){
        cout<<que.top()<<endl;
        que.pop();
    }
    cout<<que.size()<<endl;
    cout<<que.empty()<<endl;
    return 0;
}