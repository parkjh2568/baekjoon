#include <iostream>
#include <string>

using namespace std;
int main()
{
    string aa;
    int a[255] = {0};
    //97 ~ 122;
    cin >> aa;
    for(int i = 0, b = aa.length(); i < b; i++)
    {
        a[int(aa[i])]++;
    }
    for (int i = 97; i <= 122; i++)
    {
        cout<< a[i]<<" ";
    }
    cout<<"\n";
}