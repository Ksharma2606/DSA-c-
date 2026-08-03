#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
        {
            return 0;
        }
        int s = 0;
        int f = 1;
        int k = 1;
        int end = nums.size();
        while (f < end)
        {
            if (nums[s] != nums[f])
            {
                s++;
                nums[s] = nums[f];
                k++;
            }
            f++;
        }
        return k;
    }
};

int main()
{
    Solution s;

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int result = s.removeDuplicates(v);
    cout << result;

    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    return 0;
}