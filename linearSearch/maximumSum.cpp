//Main Logic: The positive numbers actually makes the difference.
//Also about the max elements, we need to include the zeroes

#include <iostream>
#include <vector>

int main(){
    long N = 0;
    std::vector<long long> nums;
    long long inp = 0, maxNegative = -999999999;
    unsigned long long maxSum = 0, noOfZeroes = 0, maxElement = 0;

    std::cin >> N;
    for (long i = 0; i < N; i++)
    {
        std::cin >> inp;
        nums.push_back(inp);
    }

    for (long i = 0; i < N; i++)
    {
        if(nums[i] < 0){
            if(nums[i] > maxNegative){
                maxNegative = nums[i];
            }
        }

        else if(nums[i] > 0){
            maxSum += nums[i];
            maxElement++;
        }

        else
        {
            noOfZeroes++;
        }    
    }
    
    if(noOfZeroes == 0 && maxSum == 0){
        std::cout << maxNegative << "  " << 1;
    }
    else if (maxSum == 0 && noOfZeroes > 0)
    {
        std::cout << 0 << "  " << noOfZeroes;
    }
    else{
        std::cout << maxSum << "  " << maxElement + noOfZeroes;
    }

    return 0;
}
