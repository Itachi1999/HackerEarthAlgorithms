//Simple Linear Search, no extra algo

#include <iostream>
#include <vector>
//#define unsigned long long ull;

int main(){
    long N = 0;  
    unsigned long long K = 0, a = 0;
    std::vector<unsigned long long> v;
    
    std::cin >> N;
    for(long i = 0; i < N; i++){
        std::cin >> a;
        v.push_back(a);
    }
    std::cin >> K;
    for(long i = 0; i < N; i++){
        if(v[i] == K){
            std::cout << i;
            return 0;
        }
    }
    std::cout << -1;
    return 0;
}