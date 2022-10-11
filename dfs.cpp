#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
using namespace std;

const int N = 1e5;
int vis[N];

vector<int> graph[N];
 
void dfs(int vertex){
    vis[vertex] = 1;
    for(auto &child: graph[vertex]){
        if(vis[child]) continue;
        dfs(child);
    }
}
 
int32_t main(){
   int n;
   cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].pb(x);
    }
    dfs(1);
   return 0;
}