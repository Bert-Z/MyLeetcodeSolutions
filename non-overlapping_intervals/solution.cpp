#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool mycmp(vector<int> a, vector<int> b)
{
    return (a[1] < b[1]);
}

int eraseOverlapIntervals(vector<vector<int>> &intervals)
{

    if (intervals.size() == 0)
    {
        return 0;
    }

    // 不重叠个数
    int cnt = 1;
    int i = 0;
    sort(intervals.begin(), intervals.end(), mycmp);

    for (int j = 1; j < intervals.size(); j++)
    {
        if (intervals[j][0] < intervals[i][1])
        {
            continue;
        }

        cnt++;
        i = j;
    }

    return intervals.size() - cnt;
}

int main()
{
    vector<vector<int>> a{{1,2},{1,2},{1,2}};
    // vector<int> b;
    // b.push_back(1);
    // b.push_back(2);
    // a.push_back(b);
    cout << eraseOverlapIntervals(a) << endl;

    return 0;
}