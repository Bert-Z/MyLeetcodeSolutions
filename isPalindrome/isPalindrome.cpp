#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

class Solution
{
  public:
    bool isPalindrome(string s)
    {
        for (auto it = s.begin(); it != s.end(); it++)
        {
            if (!isalpha(*it) && !isdigit(*it))
            {
                s.erase(it);
                it--;
            }
        }

        std::transform(s.begin(), s.end(), s.begin(),
                       [](unsigned char c) -> unsigned char { if(isalpha(c))return std::toupper(c);else return c; });


        string res = s;

        reverse(res.begin(), res.end());


        if (res == s || s == "")
            return true;
        else
            return false;
    }
};