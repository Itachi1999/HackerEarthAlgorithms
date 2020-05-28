#include <iostream>

int main(){
    int T = 0, E = 0, X = 0, Y = 0;

    std::cin >> T;
    while(T){
        T--;
        int dist[10001] = {0}, N = 0;
        std::cin >> E;
        while(E){
            E--;
            std::cin >> X >> Y;
            if(dist[X] == 0 && dist[Y] == 0 && X != Y){
                dist[X]++; dist[Y]++;
                N += 2;
            }
            else if(dist[X] == 0 && dist[Y] == 0 && X == Y){
                dist[X]++;
                N++;
            }
            else if(dist[X] == 0 && dist[Y] != 0){
                dist[X]++;
                N++;
            }
            else if(dist[X] != 0 && dist[Y] == 0){
                dist[Y]++;
                N++;
            }
            else{
                continue;
            }
        }
        std::cout << N << std::endl;
    }
}