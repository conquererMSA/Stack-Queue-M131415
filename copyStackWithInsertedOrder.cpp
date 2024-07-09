#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st1;
    stack<int> st2;
    int sz;
    cin>>sz;
    for(int i=1; i<=sz; i++){
        int x;
        cin>>x;
        st1.push(x);
    }
    while(!st1.empty()){
        int tVal=st1.top();
        st2.push(tVal);
        st1.pop();
    }
    while(!st2.empty()){
        int tVal=st2.top();
        cout<<tVal<<endl;
        st2.pop();
    }
    return 0;
}