class Solution
{
public:
  vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
  {
    vector<int> sortedCandies = candies;
    sort(sortedCandies.begin(), sortedCandies.end(), greater());
    vector<bool> kidsWithCandies;

    for (int i = 0; i < candies.size(); i++)
    {
      if (candies[i] + extraCandies >= sortedCandies[0])
      {
        kidsWithCandies.push_back(true);
      }
      else
        kidsWithCandies.push_back(false);
    }
    return kidsWithCandies;
  }
};