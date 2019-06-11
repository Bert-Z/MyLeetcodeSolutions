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
#include <unordered_map>
#include <vector>

using namespace std;

int countOptiverOccurrences(vector<string> characterGrid)
{
    int count = 0;

    if (characterGrid.size() == 0)
    {
        return count;
    }

    // optiver.size=7

    // heng
    for (int row = 0; row < characterGrid.size(); row++)
    {
        if (characterGrid[row].size() < 7)
        {
            continue;
        }
        else
        {
            for (int col = 0; col <= (characterGrid[row].size() - 7); col++)
            {
                string thisstr = characterGrid[row].substr(col, 7);

                cout << thisstr << endl;
                if (thisstr == "OPTIVER")
                {
                    count++;
                }

                reverse(thisstr.begin(), thisstr.end());
                cout << thisstr << endl;
                if (thisstr == "OPTIVER")
                {
                    count++;
                }
            }

        }
    }

    // shu
    if (characterGrid.size() < 7)
    {
        return count;
    }

    for (int col = 0; col < (characterGrid[0].size()); col++)
    {
        string thiscol = "";

        for (int i = 0; i < characterGrid.size(); i++)
        {
            thiscol.push_back(characterGrid[i][col]);
        }

        for (int row = 0; row <= (characterGrid.size() - 7); row++)
        {

            string thisstr = thiscol.substr(row, 7);

            // check
            if (thisstr == "OPTIVER")
            {
                count++;
            }

            reverse(thisstr.begin(), thisstr.end());
            // check
            if (thisstr == "OPTIVER")
            {
                count++;
            }
        }


    }

    return count;
}