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

    int F = 1;
    int S = 0;
    if (n == 0)
    {
        return 0;
    }
    while (F < n)
    {
        if (v[F] != v[S])
        {
            S++;
            v[S] = v[F];
        }
        F++;
    }

    for (int i = 0; i <= S; i++)
    {
        cout << v[i] << " ";
    }
}