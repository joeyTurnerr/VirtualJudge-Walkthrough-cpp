/*
 * 33-Print Sub-Array
 * Link: https://vjudge.net/problem/CodeChef-ARRLS1
 */
#include <iostream>
using namespace std;
int arr[1000000+5];
int main ()
{
    int n, l, r;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> l >> r;
    for (int j = l-1; j <= r-1; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}
