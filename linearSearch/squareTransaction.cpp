//simple algo but may take O(N^2)
//check for the better one with less time complextiy

#include <iostream>
#include <vector>

int main(){
    std::vector<int> transactions;
    int inp = 0;
    unsigned long Q = 0, T = 0, index = 0;
    unsigned long long target = 0, sum  = 0;
    std::cin >> T;
    for (unsigned long i = 0; i < T; i++)
    {
        std::cin >> inp;
        transactions.push_back(inp);
    }

    std::cin >> Q;
    while (Q)
    {
        Q--;
        index = 0;
        std::cin >> target;
        while(index < T)
        {
            sum += transactions[index];
            if(sum >= target){
                std::cout << index + 1 << std::endl;
                break;
            }
            index++;
        }
        if(index == T){
            std::cout << -1 << std::endl;
        }
        sum = 0;
    }
    
    return 0;
}