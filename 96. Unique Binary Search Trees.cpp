#include <vector>

class Solution {
public:
    int numTrees(int n) {
        //initialize dp array with 0s
        vector<int> dp(n+1, 0);
        dp[0] = 1;
        dp[1] = 1;

        for(int node = 2; node <= n; node++){
            int tot = 0;
            for(int root = 1; root <= node; root++){
                int left = root - 1;
                int right = node - root;

                tot += dp[left] * dp[right];
            }
            dp[node] = tot;
        }

        return dp[n];
        
    }
};