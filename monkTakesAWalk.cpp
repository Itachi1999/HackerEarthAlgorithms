#include<iostream>
#include<vector>
#include<string>

int main(){
	int T = 0;
    std::cin >> T;
	while(T){
		T--;
		int index = 0, count = 0;
		std::string str;
        std::cin >> str;
		while(str[index]){
			if(str[index] == 'A' || str[index] == 'E' || str[index] == 'I'|| str[index] == 'O'|| str[index] == 'U'|| str[index] == 'a'|| str[index] == 'e'|| str[index] == 'i'|| str[index] == 'o'|| str[index] == 'u'){
				count++;
			}
			index++;
		}
		std::cout << count << std::endl;
	}

}
