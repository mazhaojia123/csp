#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int sum, temp;

    while (getline(cin, s))
    {
        istringstream ss(s);
        sum = 0;
        while (ss >> temp)
        {
            sum += temp;
        }
        cout << sum << endl;
    }

    return 0;
}