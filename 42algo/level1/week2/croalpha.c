#include <stdio.h>
int main()
{
        char *cro[] = {"c=","c-","dz=","d-","lj","nj","s=","z="};
        char a[101];
        scanf("%s",a);
        int b = 0;
        int trg, count, j;
        count = 0;
        while (a[b])
        {
                trg = 0;
                for(int i = 0;i<8;i++)
                {
                        if (a[b] == cro[i][0])
                        {
                                for(j = 1;cro[i][j];j++)
                                {
                                        if (a[b+j]==cro[i][j])
                                                trg++;
                                }
                        }
                        if (j == (trg+1))
                                break;
                }
                if (j == trg+1)
                        b = b+j;
                else
                        b++;
                count++;
        }
        printf("%d",count);
}
