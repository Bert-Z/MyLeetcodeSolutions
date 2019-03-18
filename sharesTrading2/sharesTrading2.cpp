#include <vector>

using namespace std;

class Solution
{
  public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;

        for (auto i = 0; i < (int)prices.size() - 1; i++)
        {
            int bet = prices[i + 1] - prices[i];
            if (bet > 0)
                profit += bet;
        }
        return profit;
    }
};