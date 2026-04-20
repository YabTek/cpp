#include <unordered_map>
#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int start = 0;
        int ans = 0;
        unordered_map<int, int> dict;

        for(int i = 0; i < fruits.size(); i++){
            dict[fruits[i]] = i;

            if(dict.size() > 2){
                int old = INT_MAX;
                for(auto& it : dict){
                    old = min(old, it.second);
                }
                dict.erase(fruits[old]);
                start = old + 1;
            }
            ans = max(ans, i - start + 1);

        }

        return ans;
    }
};