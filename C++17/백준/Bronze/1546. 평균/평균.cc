#include <iostream>
using namespace std;

int main() {
    int N = 0;
    int score[1000];
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> score[i];
    }
    
    long sum = 0;
    long max = 0;
    
    for (int i = 0; i < N; i++) {
        if (max < score[i]) {
            max = score[i];
        } 
        sum = sum + score[i];
    }
    
    double mean = sum * 100.0 / max / N;    
    cout << mean << "\n";
}