class Solution
{
public:
  vector<int> countBits(int n)
  {
    vector<int> ans;
    for (int i = 0; i <= n; i++)
    {
      ans.push_back(getBits(i));
    }
    return ans;
  }

public:
  int getBits(int n)
  {
    int count = 0;
    while (n > 0)
    {
      if (n % 2 == 1)
        count++;
      n /= 2;
    }
    return count;
  }
};