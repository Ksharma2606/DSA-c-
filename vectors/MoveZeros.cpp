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

    int S = 0;
    int F;
    int temp;
    for (F = 1; F < n; F++)
    {
        if (v[F] != 0)
        {
            temp = v[F];
            v[F] = v[S];
            v[S] = temp;
            S++;
        }
        else
        {
            continue;
        }
    }

    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}