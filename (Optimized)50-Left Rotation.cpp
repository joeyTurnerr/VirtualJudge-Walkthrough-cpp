//(Optimized)50-Left Rotation
#include <iostream>
#include <queue>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    deque <int> dq;

    int n,x, rotations;
    cin >> n >> rotations;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        dq.push_back(x);
    }
    //Best Optimization wiht number theory
    rotations %= n;

    for (int i = 0; i < rotations; i++)
    {
        int y = dq.front();
        dq.pop_front();
        dq.push_back(y);
    }

    for (int i = 0; i < n; i++)
    {
        cout << dq[i] << " ";
    }

    return 0;
}
