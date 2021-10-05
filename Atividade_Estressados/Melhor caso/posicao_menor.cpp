#include <iostream>

int procurarPosicao(int i, float nums[])
{
    int menor_pos {}, menor = nums[0];

    for(i = -1; i < 5; i++) {
        if(nums[i] < menor) {
            menor_pos = i;
        }
    }

    return menor_pos;
}

int main() 
{
    int i {};
    float nums[5];

    std::cout << "Digite 5 numeros: " << "\n";

    for (i = 0; i < 5; i++) {
        std::cin >> nums[i];
    } 
    
    return procurarPosicao(i, nums);
}