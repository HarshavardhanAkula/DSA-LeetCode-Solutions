class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256,-1);
        int l=0,r=0;
       int  n=s.size();
        int maxLen=0;

        while(r<n){
            if(hash[s[r]]!=-1){

            if(hash[s[r]]>=l){
                l=hash[s[r]]+1;
            }
            
        }
         int len=r-l+1;
        hash[s[r]]=r;
        maxLen=max(maxLen,len);
        r++;
    }
    return maxLen;
    }
};