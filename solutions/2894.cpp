class Solution
{
public:
  vector<int> nums1;
  vector<int> nums2;

  int differenceOfSums(int n, int m)
  {
    for (int i = 1; i <= n; i++)
    {
      if (i % m == 0)
        nums1.push_back(i);
      else
        nums2.push_back(i);
    }
    return reduce(nums2.begin(), nums2.end()) - reduce(nums1.begin(), nums1.end());
  }
};