#include <bits/stdc++.h>
using namespace std;


int main()
{
    int sum = 0;
    char *p;
    char c[256];
    std::string line;

    while (getline(std::cin, line))
    {
        strcpy(c, line.c_str());
        sum = 0;
        p = strtok(c, " ");

        while (p != NULL)
        {
            sum += atoi(p);
            p = strtok(NULL, " ");
        }
        cout << sum << endl;
    }
    
    return 0;
}