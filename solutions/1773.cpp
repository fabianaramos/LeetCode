class Solution
{
public:
  int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
  {
    int ans = 0;
    int k = 0;
    if (ruleKey == "type")
      k = 0;
    else if (ruleKey == "color")
      k = 1;
    else
      k = 2;
    for (int i = 0; i < items.size(); i++)
    {
      for (int j = 0; j < 3; j++)
      {
        if (items[i][j] == ruleValue && j == k)
          ans++;
      }
    }
    return ans;
  }
};