class Solution
{
public:
  int maximum69Number(int num)
  {
    string num_s = to_string(num);
    int maxnum = num;

    for (int i = 0; i < num_s.size(); i++)
    {
      if (num_s[i] == '6')
      {
        string newnum = num_s;
        newnum[i] = '9';
        if (stoi(newnum) > maxnum)
          maxnum = stoi(newnum);
      }
    }
    return maxnum;
  }
};