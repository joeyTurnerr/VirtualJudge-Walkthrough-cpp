/*
 * 3-Three Dice
 * Link: https://vjudge.net/problem/AtCoder-abc202_a
 */

 #include <iostream>
 using namespace std;
 int main()
 {
    int x,y,z;

    cin >> x >> y >> z;
    cout << 21 - (x+y+z);

    return 0;
 }
