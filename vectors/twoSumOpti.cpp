#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int target;
    cin >> target;
    int needed;

    for (int i = 0; i < n; i++)
    {
        needed = target - v[i];
        if (mp.find(needed) != mp.end())
        {
            cout << mp[needed] << " " << i;
            return 0;
        }
        mp[v[i]] = i;
    }
    cout << "No solution";
}