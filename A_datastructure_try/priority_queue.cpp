
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // 默认是大顶堆
    priority_queue<int, vector<int>, greater<int>> pq;

    for (auto i : {3, 2, 1, 5, 6, 4})
    {
        pq.push(i);
    }

    cout << pq.top() << endl;

    return 0;
}