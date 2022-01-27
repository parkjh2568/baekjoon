#include <iostream>
#include <vector>
using namespace std;
long long cnt = 0;
vector<char> f;
void move(int n, char a, char b)
{
    f.push_back(a);
    f.push_back(b);
}

void hanoi(int N, char start, char to, char via){
    cnt++;
    if (N == 1)
    {
        move(1, start, to);
    }
    else
    {
        hanoi(N-1, start, via, to);
        move(N, start, to);
        hanoi(N-1, via, to, start);
    }
}

int main()
{
    int a;
    cin >>a;
    hanoi(a,'1','3','2');
    cout<<cnt<<"\n";
    for(int i = 0,len=f.size();i<len;i+=2)
    {
        cout<<f[i]<<" "<<f[i+1]<<"\n";
    }
}