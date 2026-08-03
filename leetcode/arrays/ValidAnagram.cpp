#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool ValidAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        map<char, int> seen = {};

        for (char c : s)
        {

            seen[c]++;
        }
        for (char c : t)
        {
            seen[c]--;
            if (seen[c] < 0)
            {
                return false;
            }
        }

        cout << "\n";
        return true;
    }
};

int main()
{
    Solution sol;

    // int n;
    // cin >> n;

    // vector<string> v(n);

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    string s = "aab";
    string t = "ab";

    cout << sol.ValidAnagram(s, t);

    return 0;
}