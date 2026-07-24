#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            count = 1;
        }
        else if (max == arr[i])
        {
            count++;
        }
    }
    cout << max << "\n";
    cout << count << "\n";

    return 0;
}
