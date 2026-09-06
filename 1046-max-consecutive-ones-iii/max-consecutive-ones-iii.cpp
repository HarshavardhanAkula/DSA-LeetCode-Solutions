class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int i=0;
       int zeros=0;
       int n=nums.size();
       int maxlen=0;
       for(int j=0;j<n;j++){
        if(nums[j]==0){
            zeros++;
        }
            while(zeros>k){
                if(nums[i]==0){
                   zeros--;
                   
                }
                 i++;
            
            }
            maxlen=max(maxlen,j-i+1);
        }
       
       return maxlen;
    }
};