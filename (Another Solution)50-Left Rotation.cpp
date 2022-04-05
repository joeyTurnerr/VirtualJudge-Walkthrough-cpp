//(Another Solution)50-Left Rotation
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    int n, shift; 
    cin >> n >> shift;
    vector <int> vec;
    for (int i = 0; i < n; i++)
    {
            int x; cin >> x;
            vec.push_back(x);
    }
    shift %=n;
    for (int i = shift; i < n; i++)
        cout << vec[i] << " ";

    for (int j = 0; j < shift; j++)
        cout << vec[j] << " ";
    
 

    return 0;
    //array
    //the Deque solution get time limit exceeded in another same problem
    // Link of the problem: https://codeforces.com/group/kFd1Vb0XSf/contest/374035/problem/K
}
