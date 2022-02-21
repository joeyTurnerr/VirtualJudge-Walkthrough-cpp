/*
 * 23-Children and Candies (ABC Edit)
 * Link: https://vjudge.net/problem/AtCoder-abc043_a
 */
#include <iostream>
using namespace std;

int main ()
{
    int n, sum{0};

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum+= i;
    }
    cout << sum;
    return 0;
}
