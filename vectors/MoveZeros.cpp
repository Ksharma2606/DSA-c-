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

    int j = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            j++;
        }
    }

    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}