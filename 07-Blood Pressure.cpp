/*
 * 7-Blood Pressure
 * Link: https://vjudge.net/problem/AtCoder-abc211_a
 */
#include <iostream>
using namespace std;

int main ()
{
    int a,b;

    cin >> a >> b;
    cout << (double)(a-b)/3 + b;
    return 0;
}
