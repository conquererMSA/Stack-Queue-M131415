#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> que;
    stack<int> st;
    int sz;
    cin>>sz;
    for(int i=1; i<=sz; i++){
        int x;
        cin>>x;
        que.push(x);
        // st.push(x); zodi ekhane input nei tahole queue theke value copy kora lagbe na.
    }
    // // copy elemnts to stack to st;
    // while(!que.empty()){
    //     int fVal= que.front();
    //     st.push(fVal);
    //     que.pop();
    // }
    while(!st.empty()){
        int tVal= st.top();
        cout<<tVal<<" ";
        st.pop();
    }
    return 0;
}