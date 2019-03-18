#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

class Solution
{
  public:
    vector<int> plusOne(vector<int> &digits)
    {
        std::reverse(digits.begin(), digits.end());
        digits.push_back(0);
        ++digits[0];
        for (int i = 0; i < digits.size() - 1; ++i)
        {
            if (digits[i] < 10)
                continue;
            digits[i + 1]++;
            digits[i] -= 10;
        }
        if (digits.back() == 0)
            digits.pop_back();
        std::reverse(digits.begin(), digits.end());
        return digits;

        //pow一定会越界
        /*
        long digit = 0;
        vector<int> digitPlus;

        for (int i = 0; i < digits.size(); i++)
        {
            digit += digits[digits.size() - 1 - i] * pow(10, i);
            cout << digit << " " << pow(10, i) << endl;
        }

        digit++;
        cout << digit << endl;

        while (digit != 0)
        {
            digitPlus.insert(digitPlus.begin(), digit % 10);
            digit /= 10;
        }

        return digitPlus;
        */
    }
};
