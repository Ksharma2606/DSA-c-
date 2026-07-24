#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int min = v[0];
    int profit_today = 0;
    int max_profit = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
        profit_today = v[i] - min;
        if (max_profit < profit_today)
        {
            max_profit = profit_today;
        }
    }
    cout << max_profit;
    return 0;
}