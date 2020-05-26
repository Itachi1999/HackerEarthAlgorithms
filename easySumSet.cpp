// My algorithm is built around the brute-force method; reliable because of the low constraints (the size of A and C and the numbers are less than 100). .

// As every brute-force based problem, the solution is straight-forward. We iterate through each possible element in B (it granted that there are 100 possible numbers) and check if it suits. For verifying the suitability, we iterate the first set and see if the sum resulting is found in C. We can check if the sum is in C by simply surfing the C set, but the overall complexity is O(N^3), which theoretically still fits in the limits.

// Although I recommend using an auxiliary array: f[i] – 1 if element i is in C and 0 otherwise. The small dimension of C (100) grants us a realistic data structure. The algorithm follows:

//     We read the data and build our auxiliary array
//     We check each possible element that can be included in B by the above steps.
//     We output the answer.

// Complexity: O(N^2), O(N)



#include<iostream>
#include<vector>


int main(){
    int n = 0, m = 0, a_in = 0, flag = 1, b_in = 0;
    int if_C[301] = {0};
    std::vector<int> c(m);
    std::vector<int> a(n);
    std::vector<int> b;

    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> a_in;
        a.push_back(a_in);
    }

    std::cin >> m;
    for(int i = 0; i < m; i++){
        std::cin >> a_in;
        c.push_back(a_in);
        if_C[a_in] = 1;
    }

    b_in = 1;
    while(b_in <= 100){
        //std::cout << if_C[b_in] << " ";
        for(int j = 0; j < n; j++){
            flag *= if_C[b_in + a[j]];
        }
        if(flag){
            b.push_back(b_in);
        }
        ++b_in;
        flag = 1;
    }

    for(int i = 0; i < b.size(); i++){
        std::cout << b[i] << " ";
    }
}