class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int right=0;
        for(int i=0;i<nums.size();i++){
            right+=nums[i];
        }
        int left=0;
        for(int j=0;j<nums.size();j++){
            right-=nums[j];
            if(right==left){
                return j;
            }
            left+=nums[j];
        }
        return -1;
    }
};