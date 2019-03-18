#include <vector>

using namespace std;

class Solution
{
  public:
    void rotate(vector<int> &nums, int k)
    {
        for (int i = 1; i <= k; i++)
        {
            int End = nums[nums.size() - 1];

            nums.erase(nums.begin() + (nums.size() - 1));
            nums.insert(nums.begin(), End);
        }
    }
};