#include <vector>
#include <iostream>
#include <algorithm>    // std::sort
#include <functional>   // std::greater

using namespace std;

int main()
{
    vector<int> tryVector(10, 8);
    for (auto it = tryVector.begin(); it != tryVector.end(); it++)
    {
        cout << *it << " ";
    }

    cout << tryVector[2] << endl;

    cout << *(tryVector.begin() + 2) << endl;

    tryVector.push_back(3);

    tryVector.insert(tryVector.begin(), 1);

    cout << "After push and insert" << endl;
    for (auto it = tryVector.begin(); it != tryVector.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
    cout << "size: " << tryVector.size() << endl;

    tryVector.erase(tryVector.begin());
    cout << endl;
    for (auto it = tryVector.begin(); it != tryVector.end(); it++)
    {
        cout << *it << " ";
    }

    // 遍历赋值
    for (int i = 0; i < tryVector.size(); i++)
    {
        tryVector[i] = i;
    }

    tryVector.push_back(2);
    cout<<endl;

    sort(tryVector.begin(), tryVector.end());

    for (auto it = tryVector.begin(); it != tryVector.end(); it++)
    {
        cout << *it << " ";
    }
    cout<<endl;

    //递减
	sort(tryVector.begin(),tryVector.end(),greater<int>());
    for (auto it = tryVector.begin(); it != tryVector.end(); it++)
    {
        cout << *it << " ";
    }

    cout<<endl;

    //元素反向排列
    reverse(tryVector.begin(),tryVector.end());
    for (auto it = tryVector.begin(); it != tryVector.end(); it++)
    {
        cout << *it << " ";
    }

    cout<<endl;

    //获取向量大小（元素个数）
    cout<<tryVector.size();

    cout<<endl;
	//向量是否为空
	cout<<tryVector.empty();

    return 0;
}