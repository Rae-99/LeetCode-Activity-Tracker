class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int, int> m;
        for(int i = 0; i<n; i++){
            int f = nums[i];
            int s = tar - f;

            if(m.find(s) != m.end()){
                ans.push_back(i);
                ans.push_back(m[s]);
                break;
            }
            m[f]=i;     
        }
        return ans;
    }
};