/*
 * 28-Beautiful Matrix
 * Link: https://vjudge.net/problem/CodeForces-263A
 */

 #include <iostream>
 using namespace std;

 int main ()
 {
    int x, ii, jj, imoves{0}, jmoves{0};

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> x;

            if (x == 1)
            {
                ii = i;
                jj = j;
            }

        }
    }

    jmoves =  abs(jj - 3);
    imoves = abs(ii - 3);
    cout << imoves + jmoves;


    return 0;
 }
