#include<bits/stdc++.h>
using namespace std;
/*
Stack kuno primary data structure na. Stack ekti theory, really kuno data structure na. Stack array,sll, and dll diye implement kora zay. Stack hocce hiher level data structure za shudhu matro push(), pop(), top(), size(), and empty() function gulu niye kaj kore.
*/
int main(){
    // stack<int> st;
    // st.push(5);
    // cout<<st.top()<<endl;
    // st.pop();
    // if(!st.empty()) cout<<st.top();
    // else cout<<"Invalid"<<endl;
    // cout<<st.size()<<endl;
    // cout<<st.empty()<<endl;

    //take input, access top, then pop by looping
    stack<int> st;
    int sz;
    cin>>sz;
    while(sz--){
        int val;
        cin>>val;
       st.push(val);
    }
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}