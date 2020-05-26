//The question is simple just fun with Golden Ratio
// W : H = [1.6, 1.7]

#include <iostream>

int main(){
    long N = 0, count = 0;

    std::cin >> N;
    while (N)
    {
        unsigned long long W = 0, H = 0;
        N--;
        std::cin >> W >> H;

        if(((double(W) / double(H)) >= 1.6 && (double(W) / double(H)) <= 1.7) || ((double(H) / double(W)) >= 1.6 && (double(H) / double(W)) <= 1.7)){
            count++;
        }
    }
    std::cout << count;
    return 0;
}