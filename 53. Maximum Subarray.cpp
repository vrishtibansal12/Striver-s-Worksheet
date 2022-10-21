class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        vector<int> subarray;
        int final_max = INT_MIN, max = 0;
        int start = 0;
        for (int i = 0; i < nums.size(); i++) {
            max += nums[i];
            if (max > final_max) {
                subarray.clear();
                final_max = max;
                subarray.push_back(start);
                subarray.push_back(i);
            }
            if (max < 0) {
                max = 0;
                start = i + 1;
            }
        }
        return final_max;
    }
};