#include <vector>

using namespace std;

class Solution
{
  public:
    void moveZeroes(vector<int> &nums)
    {
        int oralSize = nums.size();

        for (auto i = 0; i < oralSize; i++)
        {
            if (nums[i] == 0)
            {       
                while (nums[i] == 0 && oralSize != 0)
                {
                    nums.push_back(0);
                    nums.erase(nums.begin() + i);
                    oralSize--;
                }
            }
        }
    }
};