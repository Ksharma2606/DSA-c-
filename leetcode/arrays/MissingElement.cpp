#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingelement(vector<int> &nums)
    {
        int actualsum = 0;
        int expectedsum = 0;
        int num = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            actualsum += nums[i];
            count++;
            expectedsum += count;
        }
        num = expectedsum - actualsum;
        return num;
    }
};

int main()
{
    Solution s;

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << s.missingelement(nums);

    return 0;
}