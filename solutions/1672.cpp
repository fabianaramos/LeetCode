class Solution
{
public:
  vector<int> sums;
  int maximumWealth(vector<vector<int>> &accounts)
  {
    for (int i = 0; i < accounts.size(); i++)
    {
      sums.push_back(reduce(accounts[i].begin(), accounts[i].end()));
    }
    sort(sums.begin(), sums.end(), greater());
    return sums[0];
  }
};