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
    //STL checking
    // if(st1==st2) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;
    return 0;
}