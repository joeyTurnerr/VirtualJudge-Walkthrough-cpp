/*
 * 11-UOIAUAI
 * Link: https://vjudge.net/problem/AtCoder-abc049_a
 */
#include <iostream>
using namespace std;

int main ()
{
    char x;

    cin>> x;
    switch (x)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<"vowel";
            break;

        default:
            cout<<"consonant";
            break;

    }
    return 0;

    // another solution
    if (x =='a' || x =='e' || x == 'i' || x == 'o' || x == 'u')
        cout<<"vowel";
    else
        cout<<"consonant";

    // another solution

    (x=='a' || x=='e' || x=='i' || x=='o' || x=='u')? cout << "vowel" : cout << "consonant";
}
