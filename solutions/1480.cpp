class Solution
{
public:
  vector<int> runningSum(vector<int> &nums)
  {
    vector<int> sum;
    sum.push_back(nums[0]);

    for (int i = 1; i < nums.size(); i++)
    {
      int total = 0;
      total = nums[i] + sum[i - 1];
      sum.push_back(total);
    }
    return sum;
  }
};