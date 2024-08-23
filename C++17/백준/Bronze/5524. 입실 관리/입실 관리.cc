#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;

        for ( int j = 0; j < name.size(); j++) { 
            name[j] = tolower(name[j]);
        }

        cout << name << '\n';
    }
}
