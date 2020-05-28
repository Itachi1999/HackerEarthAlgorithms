#include<iostream>


int main(){
    int N =0, M = 0, x= 0, y = 0, Q = 0;
    int adj[1000][1000] = {0};

    std::cin >> N >> M;

    for(int i = 0; i < M; i++){
        std::cin >> x >> y;
        adj[x][y] = 1;
    }

    std::cin >> Q;
    for(int i = 0; i < Q; i++){
        std::cin >> x >> y;
        if(adj[x][y])   std::cout << "YES" << std::endl;
        else std::cout << "NO" << std::endl;
    }
    return 0;
}
