/*
 * 32-Vanya and Cubes
 * Link: https://vjudge.net/problem/CodeForces-492A
 */

 #include <iostream>
 using namespace std;

 int main ()
 {
    int cubes, sum{0}, remain;

    cin >> cubes;
    remain = cubes;
    for (int i = 1; i <=  cubes; i++)
    {
        sum += i;
        remain -= sum;
        if (remain < 0)
        {
            cout << i -1;
            break;
        }
        else if (remain == 0)
        {
            cout << i;
            break;
        }

    }
    return 0;
 }
