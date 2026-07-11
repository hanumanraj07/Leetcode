// Last updated: 7/11/2026, 10:50:08 PM
1class Solution {
2public:
3    vector<vector<int>> adj;
4    vector<bool> vis;
5    int nodes, degSum;
6
7    void dfs(int u) {
8        vis[u] = true;
9        nodes++;
10        degSum += adj[u].size();
11
12        for (int v : adj[u]) {
13            if (!vis[v])
14                dfs(v);
15        }
16    }
17
18    int countCompleteComponents(int n, vector<vector<int>>& edges) {
19        adj.assign(n, {});
20        vis.assign(n, false);
21
22        for (auto &e : edges) {
23            adj[e[0]].push_back(e[1]);
24            adj[e[1]].push_back(e[0]);
25        }
26
27        int ans = 0;
28
29        for (int i = 0; i < n; i++) {
30            if (!vis[i]) {
31                nodes = 0;
32                degSum = 0;
33                dfs(i);
34
35                if (degSum == nodes * (nodes - 1))
36                    ans++;
37            }
38        }
39
40        return ans;
41    }
42};