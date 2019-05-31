#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> m;

    m["hello"] = 25;

    cout << m["hello"] << endl;

    m["1"] = 1;
    m["2"] = 2;
    m["3"] = 3;

    //遍历
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << "->" << it->second << endl;
    }

    cout << endl;
    m.erase("2");
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << "->" << it->second << endl;
    }

    cout << endl;
    m.clear();
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << "->" << it->second << endl;
    }

    cout << endl;
    if (m.count("Jack"))
        cout << "FOUND" << endl;
    else
        cout << "NOT FOUND" << endl;

    return 0;
}