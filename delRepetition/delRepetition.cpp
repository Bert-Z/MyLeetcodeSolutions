#include <vector>

using namespace std;

class Solution
{
  public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return 0;
        std::size_t cur = 1;
        for (int i = 1; i < nums.size(); ++i)
            if (nums[i] != nums[cur - 1])
                nums[cur++] = nums[i];
        return cur;
        /*
        int thisNum, size = 0;

        for (auto it = nums.begin(); it != nums.end(); it++)
        {
            if (it == nums.begin())
            {
                thisNum = *it;
                size++;
            }
            else
            {
                if (*it != thisNum)
                {
                    thisNum = *it;
                    size++;
                }
                else
                {
                    while (*it == thisNum)
                    {
                        nums.erase(it);
                    }
                }
            }
        }

        return size;
        */
    }
};

int main()
{
    
    return 0;
}
