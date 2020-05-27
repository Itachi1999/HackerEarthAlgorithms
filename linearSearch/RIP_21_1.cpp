//Have to find the numbers which have '21' in it or is divisible by 21

#include <iostream>
#include <vector>

int contain_21(unsigned long num){
    int digit = 0;
    while (num)
    {
        digit = num % 10;
        if ((digit == 1) && (((num % 100) / 10) == 2))
        {
            return 1;
        }
        num /= 10;
    }
    return 0;
}

int checkingStreak(unsigned long &num){
    if (num % 21)
    {
        if (contain_21(num))
        {
            return 0;
        }
        else
        {
            return 1;
        }        
    }
    else
    {
        return 0;
    }
}

int main(){
    int T = 0;
    unsigned long num = 0;

    std::cin >> T;
    while (T)
    {
        T--;
        std::cin >> num;
        if (checkingStreak(num))
        {
            std::cout << "The streak lives still in our heart!" << std::endl;
        }
        else
        {
            std::cout << "The streak is broken!" << std::endl;
        }
        
    }
    return 0;    
}
