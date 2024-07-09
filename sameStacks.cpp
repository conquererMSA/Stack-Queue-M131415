#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st1, st2;
    int sz1;
    cin>>sz1;
    for(int i=1; i<=sz1; i++){
        int x;
        cin>>x;
        st1.push(x);
    }
    int sz2;
    cin>>sz2;
    for(int i=1; i<=sz2; i++){
        int x;
        cin>>x;
        st2.push(x);
    }
    //compare two stacks value and size manually;
    //* size same na hole stacks duita same na....
    if(st1.size()!=st2.size()) cout<<"NO"<<endl;
    else{
        while(!st1.empty() && !st1.empty()){
            if(st1.top()!=st2.top()){
                cout<<"NO"<<endl;
                break;
            }
            st1.pop();
            st2.pop();
        }
        cout<<"YES"<<endl;
    }
    //STL checking
    // if(st1==st2) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;
    return 0;
}