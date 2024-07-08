#include<bits/stdc++.h>
using namespace std;
/*
 Stack kuno primary data structure na. Stack ekti theory, really kuno data structure na. Stack array,sll, and dll diye implement kora zay. Stack hocce hiher level data structure za shudhu matro push, pop, top, size, and empty function gulu niye kaj kore.
*/
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->next=NULL;
    }
};
class MyStack {
    public:
    int sz=0;
    Node* head=NULL;
    Node* tail=NULL;
    void push(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
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
      if(head==tail){
        head=NULL;
        tail=NULL;
        sz--;
        return;
      }
      tail=tail->prev;
      sz--;
    }

    int top(){
        return tail->val;
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
     MyStack st;
     int sz;
     cin>>sz;
     // push val to stack
     while(sz--){
        int val;
        cin>> val;
       st.push(val);
     }
    // access top by looping;
    // int s=5; // 
    while(!st.empty()){
        // cout<<st.top()<<endl; // e line pac bar stack er top value return dibe. top access korar por delete kora hocce na. zodi top access korar por pop call kora hoto tahole current top er porer ta top hoto. ar pop korar fole stack ek ek kore emty hoye zeto.
        // top access korar por pop kora hole while condition e st er emty function use kora za. tar mane zodi stack emty hoye zay tahole loop bondho hoye zabe.
        cout<<st.top(); // value
        cout<<st.size()<<endl; // size
        st.pop(); // pop korate stack khali hoye zabe. stack khali hoye gele loop bondho hobe.
    }
    cout<<st.size()<<endl; //0
    cout<<st.empty()<<endl; //1 mane khali.
    st.push(10);
    st.push(10);
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    return 0;
}