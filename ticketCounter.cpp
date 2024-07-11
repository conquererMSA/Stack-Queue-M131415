class Node {
    public:
    int index;
    int tickets;
    Node(int index, int tickets){
        this->index=index;
        this->tickets=tickets;
    }
};
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time=0;
        queue<Node> qu;
        int sz=tickets.size();
        for(int i=0; i<sz; i++){
            Node newNode(i, tickets[i]);
            qu.push(newNode);
        }
        while(1){
            Node person=qu.front();
            qu.pop();
            person.tickets--;
            time++;
            if(person.index==k && person.tickets==0){
                time=time;
                break;
            }
            if(person.tickets>0){
                qu.push(person);
            }
        }
        return time;
    }
};