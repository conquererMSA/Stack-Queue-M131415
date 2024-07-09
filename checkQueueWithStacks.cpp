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
    // if(st1.size()!=que1.size()) cout<<"NO"<<endl;
    // else{
    //     while(!st1.empty() && !que1.empty()){
    //         if(st1.top()!=que1.front()){
    //             cout<<"NO"<<endl;
    //             break;
    //         }
    //         st1.pop();
    //         que1.pop();
    //     }
    //     cout<<"YES"<<endl;
    // }
    stack<int> queToStack;
    while(!que1.empty()){
        int fVal=que1.front();
        queToStack.push(fVal);
        que1.pop();
    }
    if(queToStack.size()!=st1.size()) cout<<"NO";
    // zekuno stack age emty hoye zete pare. tai shudhu size same hole kuno ekti stack empty na hoaya porzonto loop calanu jay.
    else if(queToStack.size()==st1.size()){
    while(!st1.empty()){
        if(st1.top()!=queToStack.top()){
            cout<<"Diff"<<endl;
            break;
        }
        st1.pop();
        queToStack.pop();
    }
        cout<<"NO"<<endl;
    }
    else{
        cout<<"NO";
    }
    return 0;
}