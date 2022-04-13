#include <iostream>

int main()
{
    int a,b;
    char c;
    int flag = 0;
    int ans = 0;
    scanf("%d %d",&a,&b);
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            scanf("%c",&c);
            if (c == '\n')
                scanf("%c", &c);
            if ((c == '/' || c == '\\') && flag == 0)
            {
                flag = 1;
            }
            else if ((c == '/' || c == '\\') && flag == 1)
            {
                flag = 0;
                ans += 1;
            }
            else if (c=='.' && flag == 1)
            {
                ans += 1;
            }
        }
    }
    printf("%d", ans);
}