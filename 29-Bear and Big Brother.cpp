/*
 * 29-Bear and Big Brother
 * Link: https://vjudge.net/problem/CodeForces-791A
 */
#include <iostream>
using namespace std;

int main ()
{
    int a, b, years{0};

    cin >> a >> b;

    while (true)
    {
       a *= 3;
       b *= 2;
       years++;

       if (a > b)
       {
            cout << years;
            break;
       }

    }


    return 0;
}
