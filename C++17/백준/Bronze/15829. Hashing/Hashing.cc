#include <iostream>

using namespace std;

long long hashing(const string &str)
{
    long long hashResult = 0;
    long long r_pow = 1;
    const int r = 31;
    const int M = 1234567891;

    for (char c : str)
    {
        int a_i = c - 'a' + 1;
        hashResult = (hashResult + a_i * r_pow) % M;
        r_pow = (r_pow * r) % M;
    }

    return hashResult;
}

int main()
{
    int inputLength;
    cin >> inputLength; // 문제 조건에 따라 입력받지만 이 함수에서 사용하지는 않아여

    string strInput;
    cin >> strInput;

    // c + 'a' + 1 => a = 1 ... z = 26 auto mapping

    cout << hashing(strInput);
}