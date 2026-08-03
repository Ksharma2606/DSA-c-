#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    vector<int> plusOne(vector<int> &digits)
    {
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        // If we reach here, every digit was 9
        digits.insert(digits.begin(), 1);

        return digits;
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

    vector<int> digits = s.plusOne(v);

    for (int x : digits)
    {
        cout << x << " ";
    }

    return 0;
}