#include <iostream>
#include <string>

using namespace std;

//소문자, 대문자, 숫자, 공백
int main()
{
    string a;
    int b[4];
    for(;getline(cin, a);)
    {
        b[0] = 0;
        b[1] = 0;
        b[2] = 0;
        b[3] = 0;
        for(int i = 0; i < a.length(); i++)
        {
            if (a[i]>= 'A' && a[i]<='Z')
                b[1]++;
            else if (a[i]>='a' && a[i] <= 'z')
                b[0]++;
            else if (a[i]>='0' && a[i] <= '9')
                b[2]++;
            else
                b[3]++;
        }
        cout << b[0]<<" "<<b[1]<<" "<<b[2]<<" "<<b[3]<<"\n";
        a.clear();
    }

}