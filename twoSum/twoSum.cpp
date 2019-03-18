#include <map>
#include <vector>

using namespace std;

class Solution
{
  public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> mapbox;
        vector<int> tSum;
        for (auto item : nums)
            mapbox[item] = target - item;

        for (auto it = mapbox.begin(); it != mapbox.end(); it++)
        {
            if (mapbox.count(it->second))
            {
                for (int i = 0; i < nums.size(); i++)
                {
                    if (nums[i] == it->first || nums[i] == it->second)
                    {
                        tSum.push_back(i);
                    }
                }
                break;
            }
        }

        return tSum;
    }
};