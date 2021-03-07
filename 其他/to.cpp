#include <bits/stdc++.h>

int main()
{
    int n, p;
    scanf("%d", &n);

    double sum = 0;
    double *a = new double[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", a+i);
        sum += a[i];
    }

    p = round(sum/n);

    sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += pow((a[i]-p), 2);
    }

    printf("%.0f\n", sum);

    return 0;
}