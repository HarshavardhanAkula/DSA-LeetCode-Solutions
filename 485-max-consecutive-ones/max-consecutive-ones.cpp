class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=0,r=0;
        int maxLen=INT_MIN;
        while(r<nums.size()){
                if(nums[r]==0){
                l=r+1;
            }

            maxLen=max(maxLen,r-l+1);
               r++;
        }
        return maxLen;

    }
};