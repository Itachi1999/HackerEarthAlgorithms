//Just sum up the whole array elements and use linear search to exclude each 
//member and calculate the temp and calculate the max and min

#include <iostream>
#include <vector>

int main(){
    long N = 0;
    std::vector<unsigned long long> nums;
    unsigned long long sumTotal = 0, temp = 0, maxElement = 0, minElement = 999999999999, inp = 0;

    std::cin >> N;
    for (long i = 0; i < N; i++)
    {
        std::cin >> inp;
        nums.push_back(inp);
    }
    
    for (long i = 0; i < N; i++)
    {
        sumTotal += nums[i];
    }

    for (long i = 0; i < N; i++)
    {
        temp = sumTotal - nums[i];
        if (maxElement < temp)
        {
            maxElement = temp;
        }
        if(minElement > temp){
            minElement = temp;
        }
        temp = 0;
    }

    std::cout << minElement << " " << maxElement;
    return 0;
}