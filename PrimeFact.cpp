#include <bits/stdc++.h>
using namespace std;

void generatePrimeFactors(int n)
{
    int i, count;
    for(i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            count = 0;
            while(n % i == 0) n /= i, count++;
            cout << i << "^" << count << endl;
        }
    }
    if(n != 1) cout << n << "^" << "1" << endl;
}

int main()
{
    int n;
    generatePrimeFactors(n);
    return 0;
}
