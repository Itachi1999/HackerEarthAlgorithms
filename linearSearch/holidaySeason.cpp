#include <iostream>
#include <string>

int main(){
    int a = 0, b = 0, c = 0, d = 0, N = 0, count = 0;
    std::string str;

    std::cin >> N;
    std::cin >> str;
    for (int i = 0; i < N - 3; i++)
    {
        a = i;
        for(int j = i + 1; j < N - 2; j++)
        {
            b = j;
            for (int k = j + 1; k < N - 1; k++)
            {
                c = k;
                for (int l = k + 1; l < N; l++)
                {
                    d = l;
                    if(str[i] == str[k] && str[j] == str[l]){
                        count++;
                    }
                }
                
            }
                   
        }
    }
    std::cout << count;
}