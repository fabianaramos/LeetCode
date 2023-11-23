class Solution
{
public:
  int sumIndicesWithKSetBits(vector<int> &nums, int k)
  {
    int result = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      int n = i;
      int sum = 0;
      while (n > 0)
      {
        if (n % 2 == 1)
        {
          sum++;
        }
        n /= 2;
      }
      if (sum == k)
        result += nums[i];
    }
    return result;
  }
};