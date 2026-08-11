class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n = order.size(), m = friends.size();
        vector<int> ans;
        for(int x: order){
            if(find(friends.begin(), friends.end(), x) != friends.end()){
                ans.push_back(x);
            }
        }
        return ans;
    }
};