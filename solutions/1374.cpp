class Solution
{
public:
  string generateTheString(int n)
  {
    string res = "";
    if (n % 2 != 0)
    {
      for (int i = 0; i < n; i++)
        res += 'p';
    }
    else
    {
      for (int i = 0; i < n - 1; i++)
        res += 'z';
      res += 'b';
    }
    return res;
  }
};