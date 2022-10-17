class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0;
        int ans=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i])
                sum++;
            else{
                if(sum>ans)
                    ans=sum;
                sum=0;
            }
        }
        if(sum>ans)
            ans=sum;
        return ans;
    }
};