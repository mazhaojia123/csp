#include <bits/stdc++.h>
using namespace std;

int main()
{

    int sum, temp;
    char *p;
    char c[1005];

    while (scanf("%[^\n]%*c", c) != EOF)
    {
        sum = 0;
        p = strtok(c, " ");

        while (p != NULL)
        {
            sscanf(p, "%d", &temp);
            sum += temp;
            p = strtok(NULL, " ");
        }
        printf("%d\n", sum);
    }

    return 0;
}