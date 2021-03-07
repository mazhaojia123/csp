#include <bits/stdc++.h>

int main()
{
    int n, temp, sum;
    scanf("%d", &n);

    int* a = new int[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sum = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        sum += a[i]*temp;
    }

    if(sum == 0)
    {
        printf("Yes\n");
    }
    else
        printf("No\n");

    return 0;
}