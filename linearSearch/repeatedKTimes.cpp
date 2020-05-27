//Just declare the frquency array which will keep track of the frquency of the numbers

#include <iostream>
#include <vector>

int main(){
    unsigned long N = 0, K = 0, inp = 0;
    std::vector<unsigned long> nums;
    unsigned long frequency[100001] = {0};

    std::cin >> N;
    for (unsigned long i = 0; i < N; i++)
    {
        std::cin >> inp;
        nums.push_back(inp);
        frequency[inp] += 1;
    }

    std::cin >> K;
    for (unsigned long i = 0; i < 100001; i++)
    {
        if(frequency[i] == K){
            std::cout << i;
            return 0;
        }
    }
    
     
}