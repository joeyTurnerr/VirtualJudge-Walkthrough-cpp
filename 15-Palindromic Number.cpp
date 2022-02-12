/*
 * 15-Palindromic Number
 * Link: https://vjudge.net/problem/AtCoder-abc070_a
 */
#include <iostream>
using namespace std;

int main ()
{
    int n;

    cin >> n;
    (n/100 == n%10)? cout << "Yes": cout << "No";

    return 0;
    
    //another solution
    char a, b, c;
    cin >> a >> b >> c;
    (a == c)? cout<< "Yes": cout <<"No";
}
