#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string prefix = "";
        for (int i = 0; i < strs[0].size(); i++)
        {
            char current = strs[0][i];
            for (int j = 1; j < strs.size(); j++)
            {
                if (strs[j][i] != current)

                {
                    return prefix;
                }
            }
            prefix += current;
        }
        return prefix;
    }
};

int main()
{
    Solution s;

    int n;
    cin >> n;

    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << s.longestCommonPrefix(v);

    return 0;
}