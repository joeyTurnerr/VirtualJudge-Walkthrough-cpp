//39-Word Capitalization
#include <iostream>
using namespace std;

int main ()
{
    string s;
    cin >> s;

    if (s[0] > 90)
    {
        s[0] = (char)(s[0]-32);
    }
    cout << s;
    return 0;
    // another solution Using built-in Functions:
    s.front() = toupper(s[0]);
}
