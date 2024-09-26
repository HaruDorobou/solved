#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<bool> sieve;
vector<long long> primes;

long long mod(const string& num, long long a) {
    long long res = 0;
    for (char c : num)
        res = (res * 10 + (c - '0')) % a;
    return res;
}

void build_sieve(long long limit) {
    sieve.assign(limit + 1, true);
    sieve[0] = sieve[1] = false;
    for (long long i = 2; i * i <= limit; i++) {
        if (sieve[i]) {
            for (long long j = i * i; j <= limit; j += i) {
                sieve[j] = false;
            }
        }
    }
    for (long long i = 2; i <= limit; i++) {
        if (sieve[i]) primes.push_back(i);
    }
}

long long find_smallest_prime_factor(const string& P, long long K) {
    build_sieve(K);  
    
    for (long long prime : primes) {
        if (mod(P, prime) == 0) return prime;
    }
    return K;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string P;
    long long K;
    cin >> P >> K;
    
    long long smallest_factor = find_smallest_prime_factor(P, K);
    
    if (smallest_factor < K) {
        cout << "BAD " << smallest_factor << '\n';
    } else {
        cout << "GOOD\n";
    }
    
    return 0;
}