#include <algorithm>
#include <string>

using namespace std;

class Solution
{
  public:
    string reverseString(string s)
    {
        reverse(s.begin(), s.end());
        return s;
    }
};