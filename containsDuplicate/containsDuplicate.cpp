#include <map>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
public:
  bool containsDuplicate(vector<int> &nums)
  {
    std::unordered_set<int> st;
    st.reserve(nums.size());
    for (const auto item : nums) {
      if (!st.emplace(item).second)
        return true;
    }
    return false;
  }
};