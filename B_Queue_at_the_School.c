#include<stdio.h>
int main()
{
    int n, t;
    scanf("%d%d", &n, &t);
    char qeue[100];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &qeue[i]);
    }
    for (int j = 0; j < t; j++)
    {
        for (int i = 0; i < n-1; i++)
        {
            if (qeue[i] == 'B' && qeue[i + 1] == 'G')
            {
                qeue[i] = 'G';
                qeue[i + 1] = 'B';
                i++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c", qeue[i]);
    }
    return 0;
}