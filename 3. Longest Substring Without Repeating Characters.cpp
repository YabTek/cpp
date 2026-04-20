class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int j = 0;
        set<int> seen;

        for(int i = 0; i < s.size(); i++){
            char cur_char = s[i];

            while(seen.contains(cur_char)){
                seen.erase(s[j]);
                j++;
            }
            seen.insert(cur_char);
            ans = max(ans, i-j+1);
        }

        return ans;
        
    }
};