#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S.at(i);
    }

    for (int j = N - 1; j >= 0; j--)
    {
        cout << S.at(j) << endl;
    }
}