#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> &v, int target)
{
    int left = 0;
    int right = v.size() - 1;
    int ans = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (v[mid] == target)
        {
            ans = mid;
            right = mid - 1;
        }
        else if (v[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(vector<int> &v, int target)
{
    int left = 0;
    int right = v.size() - 1;
    int ans = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (v[mid] == target)
        {
            ans = mid;
            left = mid + 1;
        }
        else if (v[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return ans;
}

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
    cout << firstOccurrence(v, target) << " ";
    cout << lastOccurrence(v, target);

    return 0;
}