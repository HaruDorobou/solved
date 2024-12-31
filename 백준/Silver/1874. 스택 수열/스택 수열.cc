#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int n;
    stack<int> stk;
    vector<int> arr;
    vector<char> ans;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num_order;
        cin >> num_order;
        arr.emplace_back(num_order);
    }

    int element = 1;

    for (int i : arr)
    {   
        while (element <= i)
        {
            stk.push(element);
            element++;
            ans.emplace_back('+');
        }

        if (stk.empty() || stk.top() != i)
        {
            cout << "NO";
            return 0;
        }

        stk.pop();
        ans.emplace_back('-');
    }

    for (char c : ans)
    {
        cout << c << '\n';
    }
}
