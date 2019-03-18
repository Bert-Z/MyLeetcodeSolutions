#include <map>
#include <vector>

using namespace std;

class Solution
{
  public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        map<int, int> map1;
        vector<int> result;

        for (auto item1 : nums1)
        {
            if (!map1.count(item1))
                map1[item1] = 1;
            else
                map1[item1]++;
        }

        for (auto item2 : nums2)
        {
            if (map1.count(item2))
            {
                if (map1[item2] != 0)
                {
                    map1[item2]--;
                    result.push_back(item2);
                }
            }
        }
        return result;
    }
};