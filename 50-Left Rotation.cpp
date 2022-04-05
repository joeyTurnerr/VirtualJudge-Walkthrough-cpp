//50-Left Rotation
#include <iostream>
#include <deque>
using namespace std;
int main ()
{
    int n, shift; cin >> n >> shift;
    deque <int> dq;
    for (int i = 0; i < n; i++)
    {
            int x; cin >> x;
            dq.push_back(x);
    }
    for (int i = 0; i < shift; i++)
    {
        int y = dq.front();
        dq.pop_front();
        dq.push_back(y);
    }  
    for(int i = 0; i < n; i++)
    {
        cout << dq[i] << " ";
    }



    return 0;
}
