class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> que;
        vector<int> ans(n);

        ans[n-1] = nums[n-1];
        que.push_back(n-1);

        for(int i = n - 2; i >= 0; i--){
            if(!que.empty() && que.front() - i > k) que.pop_front();
            ans[i] = nums[i] + ans[que.front()];

            while(!que.empty() && ans[que.back()] < ans[i]){
                que.pop_back();
            }
            que.push_back(i);
        }
        return ans[0];
        
    }
};