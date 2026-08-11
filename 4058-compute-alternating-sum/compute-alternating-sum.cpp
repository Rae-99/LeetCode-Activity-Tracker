class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int i = 0;
        while(i<n){
            sum+=nums[i++];
            if(i<n){
                sum-=nums[i++];
            }
        }
        return sum;
    }
};