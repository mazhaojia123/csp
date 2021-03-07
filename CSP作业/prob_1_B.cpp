#include <bits/stdc++.h>

int main()
{
    int a[1005];
    int N;
    
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    int temp;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    int min = 100004;
    for(int i = 0; i < N - 1; i++)
    {
        temp = a[i+1]-a[i];
        if(temp < min)
        {
            min = temp;
        }
    }

    printf("%d", min);

    return 0;
}