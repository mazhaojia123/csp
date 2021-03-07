#include <bits/stdc++.h>

int main()
{
    char s[10005];

    scanf("%s", s);
    bool hardReading = true;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(i%2 == 1 && s[i] <= 'z' && s[i] >= 'a')
        {
            hardReading = false;
            break;
        }
        if(i%2 == 0 && s[i] >= 'A' && s[i] <= 'Z')
        {
            hardReading = false;
            break;
        }
        
    }
    if(hardReading == false)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }

    return 0;
}