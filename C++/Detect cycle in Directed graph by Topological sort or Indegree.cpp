bool isCyclic(int V, vector<int> adj[]) {
        int n = V;
        vector<int> indegree(n, 0);
        for(int i=0;i<n;i++)
        {
            for(auto it: adj[i])
            indegree[it]++;
        }
        queue<int> q;
        for (int i = 0; i < n; i++)
            if (indegree[i] == 0)
                q.push(i);

        int temp;
        while (!q.empty())
        {
            temp = q.front();
            q.pop();
            for (auto it : adj[temp])
            {
                indegree[it]--;
                if (indegree[it] == 0)
                    q.push(it);
            }
        }
        for (auto it : indegree)
            if (it != 0)
                return true; // cycle present
        return false;
    }
