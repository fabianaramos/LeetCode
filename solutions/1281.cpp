class Solution
{
public:
  int subtractProductAndSum(int n)
  {
    int mult = 1;
    int sum = 0;
    for (char &c : std::to_string(n))
    {
      int num = c - '0';
      sum += num;
      mult *= num;
    }
    return mult - sum;
  }
};