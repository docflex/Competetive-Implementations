#include<bits/stdc++.h>
using namespace std;
#define lli long long int

lli d, x, y;

inline lli BinExpo(lli a, lli n, lli mod)
{
    lli res = 1;
    while(n)
    {
        if(n % 2) res = ((res % mod) * (a % mod)) % mod, n--;
        else a = ((a % mod) * (a % mod)) % mod, n /= 2;
    }
    return res;
}

void extendedEuclid(lli A, lli B) 
{
    if(B == 0) d = A, x = 1, y = 0;
    else 
    {
        extendedEuclid(B, A % B);
        lli temp = x;
        x = y;
        y = temp - (A / B) * y;
    }
}

lli modInverse(lli A, lli M)
{
    extendedEuclid(A, M);
    return (x % M + M) % M;    //x may be negative
}

int main()
{
    lli A, B, C, M, inv;
    cin >> A >> B >> C >> M;
    inv = modInverse(C, M);
    cout << ((binExpo(A, B, M) % M) * (inv % M)) % M << endl;
    cout << inv;
    return 0;
}
