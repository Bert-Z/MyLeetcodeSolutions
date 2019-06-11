// priority_queue 自定义优先级

#include <iostream>
#include <map>
#include <queue>
#include <vector>

using namespace std;

// 方法2
struct node
{
    int number;
    int frequent;

    node(int i, int j) : number(i), frequent(j){};

    friend bool operator<(node n1, node n2)
    {
        return n1.frequent < n2.frequent;
    }
};

// 方法1
struct cmp
{
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return (a.second) < (b.second);
    }
};

map<int, int> kFreq;

int main()
{
    kFreq[1] = 3;
    kFreq[2] = 2;
    kFreq[3] = 1;

    // 方法1
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    for (auto it = kFreq.begin(); it != kFreq.end(); it++)
        pq.push(pair<int, int>(it->first, it->second));

    for (int i = 0; i < 2; i++)
    {
        cout << pq.top().first << "->" << pq.top().second << endl;
        pq.pop();
    }

    cout << endl;


    // 方法1
    priority_queue<node> pq2;
    for (auto it = kFreq.begin(); it != kFreq.end(); it++)
        pq2.push(node(it->first, it->second));

    for (int i = 0; i < 2; i++)
    {
        cout << pq2.top().number << "->" << pq2.top().frequent << endl;
        pq2.pop();
    }

    return 0;
}
