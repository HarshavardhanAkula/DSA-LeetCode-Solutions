class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int dif=INT_MAX,ans=0,n=nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1,k=n-1;
            
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target) return target;
                else if(abs(sum-target)<dif){
                    dif=abs(sum-target);
                    ans=sum;
                }
                if(sum>target) k--;
                else j++;
            }
        }
        return ans;

    }
};