class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int i=0,j=0;
      int n=nums.size();
      int maxlen=0;
      while(j<n){
        if(nums[j]==1){
            maxlen=max(maxlen,j-i+1);  
            
        }
        else {
            i=j+1;
        }
        j++;
      }
      return maxlen;

    }
};