class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(string c:operations){
            if(c=="+"){
                int prev1=st.top();
                st.pop();
                int prev2= st.top();
                st.push(prev1);
                st.push(prev1+prev2);
            }
            else if(c=="D"){
                st.push(st.top()*2);
            }
            else if(c=="C"){
                st.pop();
            }
            else{
                st.push(stoi(c));
            }
        }
        int val=0;
        while(!st.empty()){
            val+=st.top();
            st.pop();
        }
        return val;
    }
};