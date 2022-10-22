// agar (x) is adjacent node of (y) 
// and in for(auto it: adj[y])
// if (it==x) is already visited and(x) is not the parent of (y),then it means there is cycle.

bool dfs(int node, int parent, vector<bool> &vis, vector<int> adj[])
{
    vis[node] = true;
    for (auto it : adj[node])
    {
        if (vis[it] == false)
        {
            if (dfs(it, node, vis, adj) == true) 
                return true;
        }
        else if (vis[it] == true && it != parent)
        {
            return true; // cycle hai
        }
    }
    return false;
}
bool isCycle(int V, vector<int> adj[])
{
    vector<bool> vis(V, false);
    for (int i = 0; i < V; i++)
    {
        if (vis[i] == false)
        {
            if (dfs(i, -1, vis, adj) == true)
                return true;
        }
    }
    return false;
}
