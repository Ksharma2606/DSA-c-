#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num;
    int arr[100];

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    cin >> num;

    for (int i = 0; i < n; i++)
    {
        if (num == arr[i])
        {
            cout << "Found at index: " << " " << i << "\n";
        }
    }

    return 0;
}
