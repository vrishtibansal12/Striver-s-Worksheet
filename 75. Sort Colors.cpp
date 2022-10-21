class Solution {
public:
    // void sortColors(vector<int>& nums) {
    //     unordered_map<int,int> m;
    //     for(int i=0;i<nums.size();i++)
    //         m[nums[i]]++;
    //     int t=0;
    //     // for(int k=0;k<3;k++)
    //     //     cout<<m[k];
    //     for(int i=0;i<nums.size();i++){
    //         while(!m[t])
    //             t++;
    //         nums[i]=t;
    //         m[t]--;
    //     }
    // }
     void sortColors(vector<int>& nums) {
        int lo = 0; 
        int hi = nums.size() - 1; 
        int mid = 0; 

        while (mid <= hi) { 
            switch (nums[mid]) { 

            // If the element is 0 
            case 0: 
                swap(nums[lo++], nums[mid++]); 
                break; 

            // If the element is 1 . 
            case 1: 
                mid++; 
                break; 

            // If the element is 2 
            case 2: 
                swap(nums[mid], nums[hi--]); 
                break; 
            }
        }
         
    }
};