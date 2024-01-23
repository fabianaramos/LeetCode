class Solution
{
public:
  bool halvesAreAlike(string s)
  {
    int size = s.size() / 2;
    int vowels_b_h = 0;
    int vowels_a_h = 0;

    for (int i = 0; i < s.size(); i++)
    {
      if (i < size)
        vowels_b_h += isVowel(s[i]);
      else if (i >= size)
        vowels_a_h += isVowel(s[i]);
    }
    if (vowels_b_h == vowels_a_h)
      return true;
    else
      return false;
  }

public:
  int isVowel(char n)
  {
    n = tolower(n);
    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u')
      return 1;
    else
      return 0;
  }
};