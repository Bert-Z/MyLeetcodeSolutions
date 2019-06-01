#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums{-2, 1, -3, 4, -1, 2, 1, -5, 4};

    if (nums.size() == 0)
    {
        return 0;
    }

    int preSum = nums[0];
    int maxSum = preSum;

    for (int i = 1; i < nums.size(); i++)
    {
        preSum = (preSum > 0) ? (preSum + nums[i]) : nums[i];
        maxSum = max(maxSum, preSum);
    }

    cout << maxSum << endl;

    return 0;
}