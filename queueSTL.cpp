#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> que;
    int sz;
    cin>>sz;
    while(sz--){
        int x;
        cin>>x;
        que.push(x);
    }
    cout<<que.size()<<endl;
    cout<<que.empty()<<endl;
    while(!que.empty()){
        cout<<que.front()<<endl;
        que.pop();
    }
    cout<<que.size()<<endl;
    cout<<que.empty()<<endl;
    return 0;
}