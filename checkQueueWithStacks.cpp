#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st1;
    queue<int> que1;
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
        que1.push(x);
    }
    //compare two stacks value and size with queue value and size manually;
    //* size same na hole stacks ba queue same hobe na....
    if(st1.size()!=que1.size()) cout<<"NO"<<endl;
    else{
        while(!st1.empty() && !que1.empty()){
            if(st1.top()!=que1.front()){
                cout<<"NO"<<endl;
                break;
            }
            st1.pop();
            que1.pop();
        }
        cout<<"YES"<<endl;
    }
    return 0;
}