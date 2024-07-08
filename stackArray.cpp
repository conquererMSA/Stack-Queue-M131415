#include<bits/stdc++.h>
using namespace std;
/*
Stack kuno primary data structure na. Stack ekti theory, really kuno data structure na. Stack array,sll, and dll diye implement kora zay. Stack hocce hiher level data structure za shudhu matro push, pop, top, size, and empty function gulu niye kaj kore.


*/
class MyStack{
    public:
    int sz=0;
    vector<int> v;
    void push(int val){
        v.push_back(val);
        sz++; // stack e value add howyar por size barbe.
    }
    void pop(){
        // sz--, zodi stack e kuno value na thake, tahole pop function call korle size kome minus value te cole zay, kintu stack empty thakar karone kuno value pop hoy na. e kkhetre windows os seg fault na dileo online judge error dibe.
        v.pop_back();
        sz--;
        // ejonno pop holei kebol size kombe.
    }
    int top(){
          return v.back();
    }
    int size(){
        if(sz<=0) return 0;
        // initial size 0, zodi push hoy tahole stack er size barbe ar zodi pop hoy tahole stack er size kombe.
        else sz;
    }
    bool empty(){
         if(sz<=0) return true;
         else return false;
    }
};
int main(){
    // MyStack st;
    // st.push(5);
    // st.push(10);
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    // // stack khali hole top access kora zay na. ba pop korao zay na. tai stack access and pop korar age size function call kore stack er size check kore nite oy.
    // st.pop(); // eta eror dibe karon stack khali.kintu windows e garbage value return kore
    // st.pop(); //etao error dibe, kintu windows e garbage value return kore
    //  cout<<st.size()<<endl;
    //  cout<<st.empty()<<endl;

    //loop diye kaj kora.
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
        cout<<st.top()<<endl;
        st.pop(); // pop korate stack khali hoye zabe. stack khali hoye gele loop bondho hobe.
    }
    return 0;
}