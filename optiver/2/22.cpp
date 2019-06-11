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


float calculateFastestKilometreSpeed(vector<int> metreSplits)
{
    priority_queue<float> speeds;
    vector<int> s;

    for (int i = 0; i < metreSplits.size();i++){
        int si = 0;
        for (int j = 0; j <= i;j++){
            si += metreSplits[j];
        }
        s.push_back(si);
    }

        for (int end = 0; end < metreSplits.size(); end++)
        {
            for (int start = 0; start <= end; start++)
            {
                int thismeters = 0;
                int runtimer = 0;
                // for (int i = start; i <= end; i++)
                // {
                //     thismeters += metreSplits[i];
                //     runtimer++;
                // }

                thismeters = s[end] - (start?s[start-1]:0);
                runtimer = end - start + 1;

                if (thismeters >= 1000)
                {
                    float speed;
                    speed = ((float)(thismeters) / (5 * runtimer));
                    speeds.push(speed);
                }
            }
        }

    return speeds.top();
}