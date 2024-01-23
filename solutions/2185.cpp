class Solution
{
public:
  int prefixCount(vector<string> &words, string pref)
  {
    int ans = 0;
    for (int i = 0; i < words.size(); i++)
    {
      if (words[i].starts_with(pref))
        ans += 1;
    }
    return ans;
  }
};