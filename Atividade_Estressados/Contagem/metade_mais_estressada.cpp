#include <iostream>
#include <string>

std::string stressMetade(int i, float nums[])
{
    float soma_1 {0}, soma_2 {0};

    for (i = 0; i < 2; i++) {
        soma_1 = soma_1 + nums[i];
    }
    for (i = 3; i < 5; i++) {
        soma_2 = soma_2 + nums[i];
    }

    if (soma_1 > soma_2) {
        return "Primeira";
    }
    if (soma_2 > soma_1) {
        return "Segunda";
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
    
    std::cout << "\n" << stressMetade(i, nums) << "\n";
}