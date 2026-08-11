class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        sort(v.begin(),v.end());
        string ans="";
        int n=v.size();
        string first=v[0],last=v[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                break;
            }
            ans+=first[i];
        }
        return ans;
    }
};