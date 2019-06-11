#include <algorithm>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

/*
 * Complete the function below.
 */
float ExpectedCrabWalk(int numsteps)
{
    vector<pair<int, int>> direction{make_pair<int, int>(0, 0), make_pair<int, int>(0, 1), make_pair<int, int>(0, -1), make_pair<int, int>(1, 0), make_pair<int, int>(-1, 0)};
    float res = 0;

    srand((unsigned)time(NULL));
    // cout << rand() % 5 << endl;

    for (int i = 0; i < 10000; i++)
    {
        pair<int, int> atlast(0, 0);
        for (int j = 0; j < numsteps; j++)
        {
            pair<int, int> thisone = direction[rand() % 5];
            if (thisone == make_pair<int, int>(0, 0))
                break;
            atlast.first += thisone.first;
            atlast.second += thisone.second;
        }
        double distance = sqrt((atlast.first * atlast.first) + (atlast.second * atlast.second));
        res += distance * 0.0001;
    }

    return res;
}