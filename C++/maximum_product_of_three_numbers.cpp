class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int x = nums[0] * nums[1] * nums[nums.size()-1];
        int y = nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        return max(x, y);
    }
};
