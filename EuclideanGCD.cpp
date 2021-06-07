#include<bits/stdc++.h>
#define lli long long int
using namespace std;

lli gcd(int a, int b)
{
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int main()
{
    lli a, b;
    cout << "GCD(a, b): " << gcd(a, b) << endl;
    return 0;
}