#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    bool flag = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (v1[i] > v1[i + 1])
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "Array sorted";
    }
    else
    {
        cout << "Array not sorted";
    }

    return 0;
}