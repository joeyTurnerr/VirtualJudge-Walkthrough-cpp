/*
 * 13-Alloy
 * Link: https://vjudge.net/problem/AtCoder-abc212_a
 */
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    if ( a>0 && b==0 )
        cout << "Gold";
    else if ( a==0 && b>0 )
        cout << "Silver";
    else
        cout << "Alloy";

    return 0;
}
