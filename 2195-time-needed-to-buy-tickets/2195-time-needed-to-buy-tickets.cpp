class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0, val = tickets[k];
        for(int i = 0, n = tickets.size(); i < n; ++i){
            if(i <= k) time += min(tickets[i] , val);
            else time += min(tickets[i] , val - 1);
        }
        return time;
    }
};