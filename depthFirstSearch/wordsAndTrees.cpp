#include<iostream>
#include<vector>
#include<string>
//#include<limits.h>
using namespace std;

void existingWords(int s, int d, vector<int> *adj, int *visited, int *alphabet, vector<char> tree, int flag){
    visited[s] = 1;
    if(s == d) flag = 1;

    if (flag == 1)
    {
       //cout << tree[s - 1];
       --alphabet[int(tree[s - 1]) - 97];
       for (size_t i = 0; i < adj[s].size(); i++)
        {
            if(visited[adj[s][i]] == 0){
                visited[adj[s][i]] = 1;
                existingWords(adj[s][i], d, adj, visited, alphabet, tree, flag);
            }
        } 
    }
    else
    {
        for (size_t i = 0; i < adj[s].size(); i++)
        {
            if(visited[adj[s][i]] == 0){
                visited[adj[s][i]] = 1;
                existingWords(adj[s][i], d, adj, visited, alphabet, tree, flag);
            }
        }
    }
    
    return;
}

int main(){
    vector<int> adj_mat[1000]; 
    vector<char> tree;
    int N = 0, u = 0, v = 0, Q = 0, d = 0, T = 0, NTemp = 0;
    char temp;
    cin >> N >> Q;
    NTemp = N;
    for(long i = 0; i < N; i++)
    {
        cin >> temp;
        tree.push_back(temp);
    }
    // for (auto ch: tree)
    // {
    //     cout << ch;
    // }
    // cout << endl;
    N--;
    while(N){
        N--;
        cin >> u >> v;

        adj_mat[u].push_back(v);
        adj_mat[v].push_back(u);
    }
    //cout << "ssss" << endl;
    while(Q){
        Q--;
        int visited[NTemp + 1] = {0}, count = 0, flag = 0;
        int alphabet[26] = {0};
        string input;
        //cout << "dd" << endl;
        cin >> d >> input;
        //cout << "ff" << d << endl;
        //cout << input << endl;
        //cout << int(input[0]) << endl;
        for (size_t i = 0; i < input.length(); i++)
        {
            ++alphabet[int(input[i]) - 97];
        }
        
        existingWords(1, d, adj_mat, visited, alphabet, tree, flag);
        count = 0;
        for(size_t i = 0; i < 26; i++)
        {
            count += (alphabet[i] > 0 ? alphabet[i] : 0);
        }    
        cout << count << endl ;
    }
    
    return 0;
}