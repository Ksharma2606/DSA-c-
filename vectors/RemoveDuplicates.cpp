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

    int F = 1;
    int S = 0;
    for (int i = 0; i < n; i++)
    {
        if (F != S)
        {
            S++;
            v[S] = v[F];
        }
        F++;
    }

    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}