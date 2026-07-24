#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num;
    vector<int> v(n);
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        v1.push_back(v[i]);
    }

    int j = k;

    for (int i = 0; i < n - k; i++)
    {
        v[i] = v[j];
        j++;
    }

    int l = 0;
    for (int i = n - k; i < n; i++)
    {
        v[i] = v1[l];
        l++;
    }

    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}