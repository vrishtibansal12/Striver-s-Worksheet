class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num=-1,count=0;
        
        for(int i=0;i<nums.size();i++){
            if(num==nums[i])
                count++;
            else if(count==0){
                num=nums[i];
                count++;
            }else
                count--;
        }
        if(count>0)
            return num;
        return -1;
    }
};