class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
       int maxSum=sum;
        int l=0;
        for(int r=k;r<n;r++){
            sum+=nums[r];
            sum-=nums[l];
            l++;
            maxSum=max(maxSum,sum);
        }
    
    return (double)maxSum/k;
    }
};