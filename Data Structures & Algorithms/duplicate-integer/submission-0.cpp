#include <unordered_map>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, bool> seenNums;
        for(int i = 0; i < nums.size(); i++){
            if(seenNums[nums[i]]){
                return true;
            } else{
                seenNums[nums[i]] = true;
            }
        }
        return false;
    }
};