#include <iostream>
#include <vector>

using namespace std;

void generateSeq(int n, int m, vector<int> &sequence, int lastNum = 1)
{
    if(sequence.size() == m)
    {
        for(int num : sequence)
            cout << num << ' ';
        cout << '\n';
        return;
    }

    for(int i = lastNum; i <= n; i++)
    {
        sequence.push_back(i);
        generateSeq(n, m, sequence, i);
        sequence.pop_back();    
    }
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n,m; cin >> n >> m;
    
    vector<int> sequence;
    generateSeq(n, m, sequence);

    return 0;
} 