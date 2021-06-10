#include <bits/stdc++.h>
using namespace std;
#define lli long long int
// MOD is Defined per usage case
lli MOD = 10e9 + 7;

inline lli fastModExpo(lli a, lli n)
{
    lli res = 1;
    while(n)
    {
        if(n % 2) res = ((res % MOD) * (a % MOD)) % MOD, n--;
        else a = ((a % MOD) * (a % MOD)) % MOD, n /= 2;
    }
    return res;
}

int main()
{
    lli a, n, mod;
    cout << "(a^n)% mod: " << BinExpo(a, n, mod);
    return 0;
}
