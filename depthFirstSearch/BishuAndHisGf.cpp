#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int findingGfDFS(int s, int des, vector<int> *adj, int *visited){
    visited[s] = 1;
    int count = 0;
    if(s == des) return 0; 
    for (size_t i = 0; i < adj[s].size(); i++)
    {
        if(visited[adj[s][i]] == 0){
            visited[adj[s][i]] = 1;
            count = 1 + findingGfDFS(adj[s][i], des, adj, visited);
        }
    }


    return count;
}

int main(){
    vector<int> adj_mat[1000];
    int N = 0, u = 0, v = 0, Q = 0, d = 0, temp = 0, min = INT_MAX, minI = 0;
    cin >> N;
    int dist[1000];
    N--;
    for (size_t i = 0; i < 1000; i++)
    {
        dist[i] = 1007;   
    }

    while(N){
        N--;
        cin >> u >> v;

        adj_mat[u].push_back(v);
        adj_mat[v].push_back(u);
    }

    cin >> Q;
    while(Q){
        Q--;
        int visited[N + 1] = {0};
        cin >> d;
        dist[d] = findingGfDFS(1, d, adj_mat, visited);    
    }

    for (size_t i = 0; i < 1000; i++)
    {
        if(i + dist[i] < min){
            min = i + dist[i];
            minI = i;
        }
    }
    
    cout << minI;
}