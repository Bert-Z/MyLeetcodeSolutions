#include <string>
#include <vector>

using namespace std;

class Solution
{
  public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string lcprefix = "";

        if (strs.size() == 0)
            return lcprefix;

        char thischar;

        int i = 0;

        while (true)
        {
            if (i == strs[0].size())
                return lcprefix;
            else
            {
                thischar = strs[0][i];
                for (auto str : strs)
                {
                    if (str[i] != thischar || i == str.size())
                        return lcprefix;
                }
                lcprefix.push_back(thischar);
            }
            i++;
        }
    }
};