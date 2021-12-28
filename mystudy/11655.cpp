#include <iostream>
#include <string>

using namespace std;

//소문자, 대문자, 숫자, 공백
int main()
{
    string a;
    int b[4];
    getline(cin, a);
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'M')
           a[i] += 13;
        else if (a[i] >= 'N' && a[i] <= 'Z')
            a[i] -= 13;
        else if (a[i] >= 'a' && a[i] <= 'm')
            a[i] += 13;
        else if (a[i] >= 'n' && a[i] <= 'z')
            a[i] -= 13;
    }
    cout<<a;
}