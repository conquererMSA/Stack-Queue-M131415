#include<bits/stdc++.h>
using namespace std;
class MyQueue {
    public:
    list<int> lst;
    void push(int val){
        lst.push_back(val);
    }
    void pop(){
       lst.pop_front();
    }
    int top(){
       return lst.front();
    }
    int size(){
        return lst.size();
    }
    bool empty(){
        return lst.empty();
    }
};
int main(){
    MyQueue que;
    int sz;
    cin>>sz;
    cout<<que.empty()<<endl;
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
    cout<<que.empty()<<endl;
    return 0;
}