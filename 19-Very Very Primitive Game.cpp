/*
 * 19-Very Very Primitive Game
 * Link: https://vjudge.net/problem/AtCoder-abc190_a
 */

 #include <iostream>
 using namespace std;

 int main ()
 {
    int a, b;
    bool c;

    cin >> a >> b >> c;
    
    if (a==b && c ==0 || a<b )
        cout << "Aoki";
    else
        cout << "Takahashi";

    return 0;
 }
