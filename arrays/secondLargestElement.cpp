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

    int largest = arr[0];
    int second_largest = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    if (second_largest == -1)
        cout << "No second largest element exists." << endl;
    else
    {
        cout << "Largest: " << largest << endl;
        cout << "Second Largest: " << second_largest << endl;
    }

    return 0;
}