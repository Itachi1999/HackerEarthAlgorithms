#include <iostream>
#include <vector>
#include <string>

int main(){
    int weight[31] = {0};
    int N = 0, factor = 0, flag = 0, count = 0;
    std::string number;
    char ch;
    std::string message;
    std::cin >> N;
    std::cin.ignore();
    while (N)
    {
        N--;
        number = "";
        count = 0;
        std::getline(std::cin, message);
        std::cout << message;
        factor = message[0] == 'G' ? 2 : 1;
        //std::cout << number;
        for (int i = 0; i < message.length(); i++)
        {
            ch = message[i];
            if(ch >= 48 && ch <= 57 && count < 2){
                number += ch;
                //std::cout << number;
                count++;
            }
            else if (count == 2 || count == 1)
            {
                weight[std::stoi(number)] += factor;
                std::cout << weight[std::stoi(number)] << std::endl;
                std::cout << number << std::endl;
                number = "";
                count = 0;
            }
            
        }
    //std::cin.ignore();    
    }

    flag = 0;
    for (size_t i = 1; i <= 30; i++)
    {
        if((weight[i] > weight[19] || weight[i] > weight[20]) && i != 19 && i != 20){
            flag = 1;
        }
    }
    if(flag){
        std::cout << "No Date" << std::endl;
    }
    else{
            std::cout << "Date" << std::endl;
    }
}