#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> V;
    vector<int> iV;

    int number;
    int order; // 숫자 여러개 들어오면 마지막에 들어온 number 순서 찾아내기
    int target_number;

    for ( int i = 1; i < 4; i++) {
        string e;
        cin >> e;
        V.push_back(e);

        if (e == "Fizz" || e == "Buzz" || e == "FizzBuzz") {
            iV.push_back(0); // 뭐 넣을라고?
            continue;
        } else {
            number = stoi(e);
            order = i;
        }
    }

    if (order == 3) target_number = number + 1;
    if (order == 2) target_number = number + 2;
    if (order == 1) target_number = number + 3;

    if ( target_number % 3 == 0 && target_number % 5 == 0) {
        cout << "FizzBuzz";
    } else if (target_number % 3 == 0 && target_number % 5 != 0) {
        cout << "Fizz";        
    } else if (target_number % 3 != 0 && target_number % 5 == 0) {
        cout << "Buzz";
    } else {
        cout << target_number;
    }
}

