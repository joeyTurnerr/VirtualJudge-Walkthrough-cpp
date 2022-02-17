/*
 * 21-Rainy Season
 * Link: https://vjudge.net/problem/AtCoder-abc175_a
 */
#include <iostream>
using namespace std;

int main ()
{
    char a, b, c;

    cin >> a >> b >> c;
    if (a==b && b==c)
        (a=='R')? cout <<3: cout <<0;
    else if (b == c && c=='R' || a ==b && b=='R')
        cout <<2;
    else
        cout << 1;
    return 0;
}
