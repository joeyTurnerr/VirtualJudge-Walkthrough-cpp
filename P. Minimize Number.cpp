//P. Minimize Number
#include <iostream>
using namespace std;

int arr[205];

bool isMinimized (int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i]= arr[i]/2;

        if(arr[i]%2 != 0)
        {
            return false;
        }
    }

    return true;
}

int main ()
{
    int n, counter{1};
    bool isEven = false;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if(arr[i]%2 != 0)
        {
            isEven = false;
            break;
        }
        else
        {
            isEven = true;
        }
    }

    if (isEven)
    {
        while (true)
        {
            bool result = isMinimized(arr, n);

            if (result)
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        cout << counter;
    }

    else
    {
        cout << 0;
    }


    return 0;
}
