#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;

        int A;
        int count = 0;
        for (int j = 0; j < N; j++)
        {
            cin >> A;
            if (A % 2 != 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}