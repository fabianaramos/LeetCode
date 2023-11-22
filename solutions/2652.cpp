class Solution
{
public:
  int sumOfMultiples(int n)
  {
    int res;
    for (int i = 0; i <= n; i++)
    {
      if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
      {
        res += i;
      }
    }
    return res;
  }
};