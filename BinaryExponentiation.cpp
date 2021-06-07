#include <bits/stdc++.h>
using namespace std;
#define lli long long int

inline lli BinExpo(lli a, lli n, lli mod)
{
    lli res = 1;
    while(n)
    {
        if(n % 2) res = (res * a) % mod, n--;
        else a = (a * a) % mod, n /= 2;
    }
    return res;
}

int main()
{
    lli a, n, mod;
    cout << "(a^n) % mod: " << BinExpo(a, n, mod);
    return 0;
}