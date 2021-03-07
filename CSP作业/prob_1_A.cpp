#include <bits/stdc++.h>

int main()
{
    int N, a, b;
    scanf("%d", &N);
    a = N/50;
    b = N%50;
    switch (b)
    {
    case 10:
        printf("%d\n", a*7+1);
        break;
    case 20:
        printf("%d\n", a*7+2);
        break;
    case 30:
        printf("%d\n", a*7+4);
        break;
    case 40:
        printf("%d\n", a*7+5);
        break;
    default:
        printf("%d\n", a*7);
        break;
    }

    return 0;
}