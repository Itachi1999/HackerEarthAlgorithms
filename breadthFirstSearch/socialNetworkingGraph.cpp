    #include<iostream>
    #include<list>
    #include<limits.h>
    #include<vector>
    using namespace std;

    void BFS(int s, vector<bool> &visited, vector<int> &prev, vector<long> &dist, vector<int> *adj_mat){
        visited[s] = 1;
        list<int> queue;
        while(1){
            
            for (size_t i = 0; i < adj_mat[s].size(); i++)
            {
                if(visited[adj_mat[s][i]] == false){
                    visited[adj_mat[s][i]] = true;
                    dist[adj_mat[s][i]] = dist[s] + 1;
                    prev[adj_mat[s][i]] = s;
                    queue.push_back(adj_mat[s][i]);
                }
            }

            if(queue.empty())   return;
            else{
                s = queue.front();
                queue.pop_front();
            }        
        }
    }

    vector<long> makeDist(vector<int> *adj, int source, int temp){
        vector<bool> visited;
        vector<int> prev;
        int i = 0;
        vector<long> dist;

        for(i = 0; i <= temp; i++){
            visited.push_back(false);
            prev.push_back(-1);
            dist.push_back(INT_MAX);
        }

        dist[source] = 0;
        BFS(source, visited, prev, dist, adj);

        return dist;
    }


    int main(){
        int T = 0;
        long N = 0, M = 0, i = 0, j = 0, source = 0, d = 0, count = 0;
        vector<int> adj_mat[10001];
        cin >> N >> M;
        //temp = N;
        while(M){
            M--;
            cin >> i >> j;
            adj_mat[i].push_back(j);
            adj_mat[j].push_back(i); //undirected
        }
        
        cin >> T;
        while(T){
            T--;
            cin >> source >> d;
            vector<long> dist;
            count = 0;
            dist = makeDist(adj_mat, source, N);
            for(long dis: dist)
                count += (dis == d ? 1 : 0);

            cout << count << std::endl;
        }
        return 0;
    }
