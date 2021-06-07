#include <iostream>
using namespace std;
#define lli long long int

bool isPrime[1000001];

inline void generateSieve()
{
    lli maxN = 1000000;
    for(lli i = 1; i <= maxN; i++) isPrime[i] = true; // This Maybe Omitted If Declartions are Changed To Reflect The Opposite
    isPrime[0] = false, isPrime[1] = false;
    for(int i = 2; i * i <= maxN; i++) if(isPrime[i] == 1) for(int j = i * i; j <= maxN; j += i) isPrime[j] = false;
}

int main() 
{
    int i, n, queries;
    cin >> queries;
    generateSieve(); // Precompuatation Takes O(N(log(log(N))))
    while(queries--)
    {
        cin >> n;
        if(isPrime[n]) cout << "Prime" << endl; // Responds in O(1)
        else cout << "Not Prime" << endl;
    }
    return 0;
}
