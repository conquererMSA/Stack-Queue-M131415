#include<bits/stdc++.h>
using namespace std;
/*
Stack kuno primary data structure na. Stack array,sll, and dll diye implement kora zay. Stack hocce hiher level data structure za shudhu matro push, pop, top, size, and empty function gulu niye kaj kore.
*/
class MyStack{
    public:
    int sz;
    vector<int> v;
    void push(int val){
        sz++;
        v.push_back(val);
    }
    void pop(){
        sz--;
        v.pop_back();
    }
    int top(){
          return v.back();
    }
    int size(){
        return sz;
    }
    bool empty(){
         if(sz==0) return true;
         else return false;
    }
};
int main(){
    MyStack st;
    st.push(5);
    st.push(10);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;

    return 0;
}