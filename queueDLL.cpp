#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
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
            //zodi stack khali thake tahole newNode i hobe first node. and newNode i hobe head and newNode e hobe taile.
            head=newNode;
            tail=newNode;
            sz++;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
        sz++;
    }
    void pop(){
        // stack zodi khali thake tahole head NULL hobe, ar zokhon NULL er next access korte zabe tokhon error dibe. tahole pop function call korar somoy check korte hobe stack khali kina.
        Node* deleteNode=head;
        head=head->next;

        // zodi stack e ekti matro node tahke tahole head=head->next korle head NULL node cole zabe. stack e ekti matro node thakar karone tail o head ke pont kore chilo. head NULL e cole zawyay tail garbage value point kore ache,, tai tail keo NULL assign kore dite hobe.
        if(head==NULL){
            // head->prev=NULL; stack e ekti node takle ta delete korar por likhar prowujon nai.
            tail=NULL; // tail ke NULL assign kore deya hoyeche.
            sz--;
            delete deleteNode;
            return;
        }
        head->prev=NULL; //
        // zodi stack e ekti matro node thake tahole head=head->next ba head ke NULL e newyar por head->prev e NULL assign korar proujon nei.
        sz--;
        delete deleteNode;
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
    int sz;
    cin>>sz;
    while(sz--){
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
    return 0;
}