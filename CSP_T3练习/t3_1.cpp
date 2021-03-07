#include <bits/stdc++.h>
using namespace std;

bool tonghua(int *b)
{
    for (int i = 2; i <= 5; i++)
    {
        if (b[i] != b[1])
            return false;
    }

    return true;
}

bool shunzi(int *a)
{
    for (int i = 1; i < 5; i++)
    {
        if (a[i + 1] - a[i] != 1)
            return false;
    }

    return true;
}

int main()
{
    //freopen("a1.in", "r", stdin);

    int c[6], a[6], b[6], cc[6];
    int a1, a2, b1, b2;
    int A, B;
    int x[10]; //9种方案

    for (int i = 1; i < 10; i++)
    {
        x[i] = 0;
    }

    scanf("%d %d %d %d %d %d", &A, &B, &a1, &b1, &a2, &b2);
    for (c[1] = 0; c[1] < A * B; c[1]++)
    {
        for (c[2] = c[1] + 1; c[2] < A * B; c[2]++)
        {
            for (c[3] = c[2] + 1; c[3] < A * B; c[3]++)
            {
                c[4] = a1 * B + b1;
                c[5] = a2 * B + b2;
                if (c[1] == c[4] || c[1] == c[5] ||
                    c[2] == c[4] || c[2] == c[5] ||
                    c[3] == c[4] || c[3] == c[5])
                    continue;

                copy(c + 1, c + 6, cc + 1);
                sort(cc + 1, cc + 6);
                for (int i = 1; i < 6; i++)
                {
                    a[i] = cc[i] / B;
                    b[i] = cc[i] % B;
                }

                //判断是不是同花顺
                if (tonghua(b) && shunzi(a))
                {
                    x[1]++;
                    continue;
                }

                //判断是不是炸弹
                if (a[4] == a[1] || (a[2] == a[5]))
                {
                    x[2] += 1;
                    continue;
                }

                //判断是不是三带二
                if ((a[1] == a[3] && a[4] == a[5]) || (a[3] == a[5] && a[1] == a[2]))
                {
                    x[3] += 1;
                    continue;
                }

                //判断是不是同花
                if (tonghua(b))
                {
                    x[4] += 1;
                    continue;
                }

                //判断是不是顺子
                if (shunzi(a))
                {
                    x[5] += 1;
                    continue;
                }

                //判断是不是三条
                if (a[1] == a[3] || a[3] == a[5] || a[2] == a[4])
                {
                    x[6] += 1;
                    continue;
                }

                //判断是不是两对
                if ((a[1] == a[2] && a[3] == a[4]) ||
                    (a[1] == a[2] && a[4] == a[5]) ||
                    (a[2] == a[3] && a[4] == a[5]))
                {
                    x[7] += 1;
                    continue;
                }

                //判断是不是一对
                if (a[1] == a[2] || a[2] == a[3] || a[3] == a[4] || a[4] == a[5])
                {
                    x[8] += 1;
                    continue;
                }

                //要不起
                x[9] += 1;
            }
        }
    }

    for (int i = 1; i <= 9; i++)
    {
        printf("%d ", x[i]);
    }

    return 0;
}