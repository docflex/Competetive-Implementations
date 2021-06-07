#include <bits/stdc++.h>
using namespace std;

int primeFacs[1000001];

void genFactors()
{
    int maxN = 1000000;
    for(int i = 1; i <= maxN; i++)
    {
        primeFacs[i] = -1;
    }
    for(int i = 2; i <= maxN; i++)
    {
        if(primeFacs[i] == -1)
        {
            for(int j = i; j <= maxN; j += i)
            {
                primeFacs[j] = i;
            }
        }
    }
}

int main()
{
    int i, n;
    cin >> n;
    genFactors();
    while(n != 1)
    {
        cout << primeFacs[n] << endl;
        n /= primeFacs[n];
    }
    return 0;
}
