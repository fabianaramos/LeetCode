class Solution
{
public:
  int maxSize(string word1, string word2)
  {
    int maxSize = word1.size();
    if (word1.size() < word2.size())
      maxSize = word2.size();
    return maxSize;
  }

public:
  string mergeAlternately(string word1, string word2)
  {
    string response = "";

    for (int i = 0; i < maxSize(word1, word2); i++)
    {
      if (word1.size() > i)
        response.push_back(word1[i]);
      if (word2.size() > i)
        response.push_back(word2[i]);
    }
    return response;
  }
};