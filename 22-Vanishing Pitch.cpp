/*
 * 22-Vanishing Pitch
 * link: https://vjudge.net/problem/AtCoder-abc191_a
 */
#include <iostream>
using namespace std;

int main ()
{
    int v, t, s, d;

    cin >> v >> t >> s >> d;
    int betweenDistance1 = v*t;
    int betweenDistance2 = v*s;
    (d>=betweenDistance1 && d<=betweenDistance2)? cout << "No": cout << "Yes";

    return 0;
}
