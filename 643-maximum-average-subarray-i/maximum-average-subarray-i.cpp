class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
         int sum=0;
         int n=nums.size();
         for(int i=0;i<k;i++){
            sum+=nums[i];
         }
         int maxSum=sum;
         int start=0,end=k;
         while(end<n){
            sum-=nums[start];
            start++;
            sum+=nums[end];
            end++;

            maxSum=max(maxSum,sum);
         }
         
         return (double) maxSum/k;
    }
};