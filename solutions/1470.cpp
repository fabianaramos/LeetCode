class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> x;
        vector<int> y;
        vector<int> ans;
    
        for (int i = 0; i < nums.size(); i++) {
            if (i < n) {
                x.push_back(nums[i]);
            }
            else {
                y.push_back(nums[i]);
            }
        }
        for (int i = 0; i < x.size(); i++) {
            ans.push_back(x[i]);
            ans.push_back(y[i]);
        }
    return ans;
    }
};