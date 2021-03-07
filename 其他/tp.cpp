#include <bits/stdc++.h>

int f(int a)
{
    char s[20];
    int b, c, length;
    char temp;
    sprintf(s, "%d", a);
    length = strlen(s);
    for (int j = 0; j < length; j++)
    {
        for (int i = 0; i < length - j - 1; i++)
        {
            if (s[i] < s[i + 1])
            {
                temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
            }
        }
    }
    sscanf(s, "%d", &b);
    for (int j = 0; j < length; j++)
    {
        for (int i = 0; i < length - j - 1; i++)
        {
            if (s[i] > s[i + 1])
            {
                temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
            }
        }
    }
    sscanf(s, "%d", &c);
    return b - c;
}

int main()
{
    int N, K, ans;
    scanf("%d %d", &N, &K);

    ans = N;
    for(int i = 0; i < K; i++)
    {
        ans = f(ans);
    }

    printf("%d\n", ans);

    return 0;
}