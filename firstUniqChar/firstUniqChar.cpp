#include <map>
#include <string>

using namespace std;

class Solution
{
  public:
    int firstUniqChar(string s)
    {
        map<char, int> stmap;

        for (auto item : s)
        {
            if (stmap.count(item))
                stmap[item]++;
            else
                stmap[item] = 1;
        }

        for (auto i = 0; i < s.size(); i++)
            if (stmap[s[i]] == 1)
                return i;

        return -1;
    }
};