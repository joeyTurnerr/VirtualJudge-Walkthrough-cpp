//546A-Soldier and Bananas
#include <iostream>
using namespace std;

int main ()
{
    int n,w,k, cost;

    cin >> k >> n >> w;

    cost = k * ( w * ( w + 1 ) /2 );
    (cost < n)? cout << 0 :cout << cost - n;

    return 0;
}
