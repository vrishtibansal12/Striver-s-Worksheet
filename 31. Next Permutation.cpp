class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i,j;
        for(i=nums.size()-1;i>0;i--){
            if(nums[i-1]<nums[i])
                break;
        }
        if(i==0){
            sort(nums.begin(),nums.end());
            return;
        }
        int temp=nums[i-1];
        for(j=nums.size()-1;j>=i;j--)
           if(nums[j]>temp){
               int t=nums[i-1];
               nums[i-1]=nums[j];
               nums[j]=t;
               break;
       }
        int n=nums.size();
    //    sort(nums.begin()+i,nums.end()) ;
    }
};