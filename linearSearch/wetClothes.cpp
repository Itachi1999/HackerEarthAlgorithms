//We have to look for the interval of rainonly, bacause of the clothes being kept together, we 
//can collect them simultanoeusly
//for the O(N) solution, we have to find the highest interval of rain and collect the clothes 
//for which a[i] < max_interval 
//g is a trap, we don't need it, since we are going once on the max_intefval to pick up all 
//clothes possible

#include <iostream>
#include <vector>

int main(){
    int n = 0, m = 0, g = 0, a = 0, max_interval = 0, count = 0, index = 0;
    std::cin >> n >> m >> g;

    std::vector<int> rain;
    std::vector<int> clothes;

    for (size_t i = 0; i < n; i++)
    {
        std::cin >> a;
        rain.push_back(a);
    }
    
    for (size_t i = 0; i < m; i++)
    {
        std::cin >> a;
        clothes.push_back(a);
    }

    for (size_t i = 0; i < n - 1; i++)
    {
        if((rain[i + 1] - rain[i]) > max_interval){
            max_interval = rain[i + 1] - rain[i];
        }
    }
     
    while (index < m)
    {
        if(clothes[index] <= max_interval){
            //g--;
            count++;
        }
        index++;
    }

    std::cout << count;
    return 0;
}
