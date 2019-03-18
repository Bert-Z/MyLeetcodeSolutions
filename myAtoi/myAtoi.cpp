#include <cctype>
#include <string>
#include <vector>

using namespace std;

class Solution
{
  public:
    int myAtoi(string str)
    {
        vector<char> nums;
        auto it = str.begin();

        while (*it == ' ' && it < str.end())
            str.erase(it);

        if (it == str.end())
            return 0;

        if (*it != '-' && *it != '+' && !isdigit(*it))
            return 0;

        if (*it == '-' || *it == '+')
        {
            nums.push_back(*it);
            it++;
        }

        if (it == str.end() || !isdigit(*it))
            return 0;
        else
        {
            while (isdigit(*it))
            {
                nums.push_back(*it);
                it++;
            }
        }

        int strn = 0, size = 0, flag = 0;
        for (auto item : nums)
        {
            if (isdigit(item) && flag == 1)
            {
                strn = strn * 10 + (item - '0');
                size++;
                continue;
            }
            if (isdigit(item) && flag == 0)
            {
                if (item != '0')
                {
                    flag = 1;
                    strn = strn * 10 + (item - '0');
                    size++;
                }
            }
        }
        if (size >= 10 || strn < 0)
        {
            if (nums[0] == '-')
            {
                if (size > 10 || strn < 0)
                    return INT_MIN;
                else
                {
                    if (size == 10)
                    {
                        if (nums[1] - '0' > 2)
                            return INT_MIN;
                        else
                            return -strn;
                    }
                    else
                        return -strn;
                }
            }
            else
            {
                if (size > 10 || strn < 0)
                    return INT_MAX;
                else
                {
                    if (size == 10)
                    {
                        if (nums[0] - '0' > 2)
                        {
                            return INT_MAX;
                        }
                        else
                            return strn;
                    }
                    else
                        return strn;
                }
            }
        }
        else
        {
            if (nums[0] == '-')
                return -strn;
            else
                return strn;
        }
    }
};