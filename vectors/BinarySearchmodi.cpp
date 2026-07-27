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

    int target;
    cin >> target;
    int left = 0;
    int right = v.size() - 1;
    int mid;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (v[mid] < target)
        {
            left = mid + 1;
        }
        else if (v[mid] > target)
        {
            right = mid - 1;
        }

        else if (v[mid] == target)
        {
            cout << mid;
            return 0;
        }
    }
    cout << left;
}