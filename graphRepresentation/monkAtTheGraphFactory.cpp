#include <iostream>

int main(){
    unsigned int degSum = 0, n = 0, tempInp = 0;
    unsigned int twiceEdge = 0;
    std::cin >> n;
    twiceEdge = (2 * n - 2);
    while(n){
        std::cin >> tempInp;
        n--;
        degSum += tempInp;
    }
    if(degSum == twiceEdge){
        std::cout << "Yes";
    }
    else{
        std::cout << "No";
    }

    return 0;
}