#include <bits/stdc++.h>

using namespace std;

//first line has n and m. number of computers and number of connections
//computers numbered 1,2....n
//Uolevis computer is 1 and Maija's is n
//m lines describing connections, each line has inputs a and b: connection between two computers. There is only one connection between any two computers
//if a route from uolevi to maija, print k: minimum number of computers on a valid route. Print an example of route. if there are no routes print IMPOSSIBLE

const int N = 1e5+3;
int n,m;
vector<int> adj[N];
queue<int> q;
bool visited[N];
int dist[N];
int path[N];

int main() {
    cin >> n >> m;
    for (int i =0; i < m; i++) {
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    q.push(1);
    visited[1] = true;
    while(!q.empty()) {
        int qfront = q.front(); q.pop();
        for(auto child: adj[qfront]) {
            if (!visited[child]) {
                visited[child] = true;
                dist[child] = dist[qfront]+1;
                path[child] = qfront;
                q.push(child);
            }
            
        }
    }

    if (!visited[n]) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    int u = n;
    int k = dist[n];
    vector<int> ans(k+1);

    for (int i = k; i >=0; i--) {
        ans[i] = u;
        u = path[u];
    }

    cout << k + 1 << endl;

    for(int i = 0; i <= k; i++) {
        cout << ans[i] << " ";
    }
}