/*
 * 24-qwerty
 * Link: https://vjudge.net/problem/AtCoder-abc218_b
 */
#include <iostream>
using namespace std;

int main ()
{
    int x;
    for(int i = 0; i < 26; i++)
    {
        cin >> x;
        cout << char (96 + x);
    }


    return 0;
}
