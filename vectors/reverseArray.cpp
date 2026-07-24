#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    int right = v1.size() - 1;
    int left = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    int temp = 0;
    while (left < right)
    {
        temp = v1[left];
        v1[left] = v1[right];
        v1[right] = temp;
        left++;
        right--;
    }
    for (auto i : v1)
    {
        cout << i << " ";
    }

    return 0;
}