#include <bits/stdc++.h>
using namespace std;

vector<bool> seen;
void dfs(vector<vector<int>> &G, int v) {
    seen[v] = true;

    for (auto next_v : G[v])
    {
        if (seen[next_v]) continue;
        dfs(G, next_v);
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> G(N);
    
    for (int i = 0; i < M; i++)
    {
        int u, v;
        cin >> u >> v;
        G[u - 1].push_back(v - 1);
        G[v - 1].push_back(u - 1);
    }

    seen.assign(N, false);
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (!seen[i])
        {
            dfs(G, i);
            count++;
        }
    }

    cout << count << endl;
}