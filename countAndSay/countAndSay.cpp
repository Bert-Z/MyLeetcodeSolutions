#include <string>

using namespace std;

class Solution
{
  public:
    string countAndSay(int n)
    {
        int count = 1;
        string firststr = "1";

        if (n == 1 || n == 0)
            return firststr;
        else
        {
            string thisstr = firststr;

            while (n != count)
            {
                string nextstr;
                char thischar = ' ';
                int thissize = 0;
                for (auto item : thisstr)
                {
                    if (thischar != item)
                    {
                        nextstr.push_back(thissize + '0');
                        nextstr.push_back(thischar);
                        thischar = item;
                        thissize = 1;
                    }
                    else
                        thissize++;
                }
                nextstr.push_back(thissize + '0');
                nextstr.push_back(thischar);
                nextstr.erase(nextstr.begin());
                nextstr.erase(nextstr.begin());

                count++;
                thisstr = nextstr;
            }

            return thisstr;
        }
    }
};