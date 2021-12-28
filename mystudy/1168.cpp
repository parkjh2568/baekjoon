#include <iostream>
#include <vector>
using namespace std;
int a, b;
int now;
int t;
vector<int> c;

void kill()
{
    printf(", %d", c[now]);
    c.erase(c.begin() + now);
    now += b - 1;
    t--;
    if (now >= t && !c.empty())
        now -= t * (now / t);
    else if (!c.empty())
        kill();
}

int main()
{
    ios::sync_with_stdio(false);
    scanf("%d %d", &a, &b);
    if (b == 1)
    {
        printf("<1");
        for (int i = 2; i <= a; i++)
            printf(", %d", i);
        printf(">");
    }
    else
    {
        now = b - 1;
        printf("<%d", b);
        for (int i = 1; i <= a; i++)
        {
            if (i % b == 0)
            {
                if (i != b)
                    printf(", %d", i);
                now += b - 1;
            }
            else
                c.push_back(i);
        }
        t = c.size();
        now -= t * (now / t);
        while (!c.empty())
        {
            kill();
        }
        printf(">");
    }
}