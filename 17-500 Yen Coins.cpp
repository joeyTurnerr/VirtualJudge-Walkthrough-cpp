/*
 * 17-500 Yen Coins
 * Link: https://vjudge.net/problem/AtCoder-abc150_a
 */

#include <iostream>
using namespace std;

int main ()
{
    int x,y;

    cin >> x >> y;
    (x*500 >= y)? cout << "Yes" : cout << "No";
    return 0;
}
