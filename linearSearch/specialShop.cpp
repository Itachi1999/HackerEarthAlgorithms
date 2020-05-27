//Z = AX^2 + BY^2 
//by differentiating w.r.t. X we get X = BN / (A + B)
//by many test cases I have figured out to round up the X


#include <iostream>
#include <cmath>

int main(){
    unsigned long T = 0;
    double N = 0, A = 0, B = 0;
    unsigned long X = 0, Y = 0, cost = 0;

    std::cin >> T;
    while (T)
    {
        T--;
        std::cin >> N >> A >> B;
        X = round((B * N) / (A + B));
        //std::cout << X;
        Y = N - X;

        cost = A * X * X + B * Y * Y;
        std::cout << cost << std::endl;
    }
    return 0;
}