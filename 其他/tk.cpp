#include <bits/stdc++.h>

int main()
{
    char s[105];
    scanf("%s", s);
    bool su = true;
    for(int i = 1; s[i] != '\0'; i++)
    {
        if(s[i] != s[i-1])
        {
            su = false;
            break;
        }
    }
    if(su == true)
    {
        printf("Won\n");
    }
    else
        printf("Lost\n");

    return 0;
}