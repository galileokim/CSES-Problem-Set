#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> adj[100005];
bool visited[100005];
vector<int> islands;

void dfs(int node) {
  if (visited[node])
    return;
  visited[node] = true;
  for (auto child : adj[node]) {
    dfs(child);
  }
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  for (int i = 1; i <= n; i++) {
    if (visited[i] == false) {
      islands.push_back(i);
      dfs(i);
    }
  }
  cout << islands.size() - 1 << endl;
  for (int i = 0; i < islands.size() - 1; i++) {
    cout << islands[i] << " " << islands[i + 1] << endl;
  }
  return 0;
}

