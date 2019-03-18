#include <math.h>
#include <stack>

using namespace std;

class Solution
{
  public:
    int reverse(int x)
    {
        stack<int> sol;
        int res = 0, count = 0;

        if (x >= 0)
        {
            while (x != 0)
            {
                sol.push(x % 10);
                x /= 10;
            }

            while (!sol.empty())
            {
                res += sol.top() * pow(10, count);
                sol.pop();
                count++;
            }

            if (res < 0)
                return 0;
            else
                return res;
        }
        else
        {
            x = -x;

            while (x != 0)
            {
                sol.push(x % 10);
                x /= 10;
            }

            while (!sol.empty())
            {
                res += sol.top() * pow(10, count);
                sol.pop();
                count++;
            }

            if (res < 0)
                return 0;
            else
                return -res;
        }
    }
};