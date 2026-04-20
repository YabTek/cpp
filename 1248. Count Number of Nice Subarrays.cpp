#include <unordered_map>

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> dict;
        int counter = 0;
        int prefixsum = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 != 0) nums[i] = 1;
            else nums[i] = 0;
        }

        for(int num : nums){
            prefixsum += num;

            if(prefixsum == k) counter += 1;
            if(dict.contains(prefixsum - k)) counter += dict[prefixsum - k];
            dict[prefixsum] += 1;
        }

        return counter;
        
    }
};