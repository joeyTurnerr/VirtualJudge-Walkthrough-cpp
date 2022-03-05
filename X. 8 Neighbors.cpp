//X. 8 Neighbors
#include <iostream>
using namespace std;
char arr[105][105];
int main ()
{
    int n, m, a, b;
    bool flag = false;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];

        }
    }
    cin >> a >> b;
    arr[a][b] = 'x';
    for (int i = a-1; i <= a+1; i++)
    {
        for (int j = b-1; j <= b+1; j++)
        {
            if (arr[i][j]=='.')
            {
                flag = true;
            }
        }
    }
    (flag)? cout << "no": cout << "yes";
    return 0;
}
