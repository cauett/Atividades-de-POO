#include <iostream>
#include <string>

std::string stressMedio(int i, float nums[])
{
    float count_1 {0}, count_2 {0};

    for (i = 0; i < 5; i++) {

        if (nums[i] > 0) {
            count_1 += 1;
        }
        if (nums[i] < 0){
            count_2 += 1;
        }
    }

    if (count_1 > count_2) {
        return "Homens";
    }
    if (count_1 < count_2) {
        return "Mulheres";
    }
    return "Empate";
}

int main() 
{
    int i {};
    float nums[5];

    std::cout << "Digite 5 numeros: " << "\n";

    for (i = 0; i < 5; i++) {
        std::cin >> nums[i];
    } 
    
    std::cout << "\n" << stressMedio(i, nums) << "\n";
}