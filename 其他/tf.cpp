#include <bits/stdc++.h>

int main()
{
    int n, sum, a, T;
    scanf("%d", &T);
    while(T -- > 0 && scanf("%d", &n)!=EOF)
    {
        sum = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n", sum);
    }
    
    return 0;
}