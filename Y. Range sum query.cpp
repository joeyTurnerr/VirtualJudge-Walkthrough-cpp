//Y. Range sum query
#include <iostream>
using namespace std;
long long arr[100000];
long long arr2[100000];

int main ()
{
    int n, t;

    cin >> n >> t;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            arr2[i] = arr[i];
        }
        else
        {
            arr2[i] = arr[i] + arr2[i-1];
        }

    }

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << arr2[b-1] - arr2[a-1] + arr[a-1] << '\n';
    }

    return 0;
}
